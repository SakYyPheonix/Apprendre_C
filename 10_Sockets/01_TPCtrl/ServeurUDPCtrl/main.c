/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 28 septembre 2020, 10:25
 * Description: Serveur UDP servant a envoyer les informations demander 
 * par un client
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#define NB_CARA 500

/**
 * 
 * @param argc
 * @param argv
 * @return 
 */
int main(int argc, char** argv) {
    int soc;
    int socClient;
    struct sockaddr_in infoServeur;
    struct sockaddr_in infoClient;
    char *donneeAEnvoyerUJL;
    donneeAEnvoyerUJL = malloc(NB_CARA);
    struct tm *donneeAEnvoyerD;
    char donneeRecue;
    int retour;
    int tailleDonnee;
    int tailleInfoClient;
    time_t t;


    //creation socket utiliser pour le serveur
    soc = socket(PF_INET, SOCK_DGRAM, 0);
    if (soc == -1) {
        printf("pb creation socket : %s \n", strerror(errno));
        exit(errno);
    }

    //creation de la socket utiliser pour le client
    socClient = socket(PF_INET, SOCK_DGRAM, 0);
    if (socClient == -1) {
        printf("pb creation socket client : %s \n", strerror(errno));
        exit(errno);
    }

    //initialisation structure info serveur
    infoServeur.sin_family = AF_INET;
    infoServeur.sin_port = htons(4444);
    infoServeur.sin_addr.s_addr = htonl(INADDR_ANY);

    //
    retour = bind(soc, (struct sockaddr *) &infoServeur, sizeof (infoServeur));
    if (retour == -1) {
        printf("pb bind : %s \n", strerror(errno));
        exit(errno);
    }

    while (1 == 1) {
        //recevoir la donne en provenance du serveur
        retour = -2;
        do {
            retour = recvfrom(soc, &donneeRecue, sizeof (char), 0, (struct sockaddr *) &infoClient, &tailleInfoClient);
            if (retour == -1) {
                printf("pb envoie : %s \n", strerror(errno));
                exit(errno);
            }
        } while (retour == -2);

        //afficher la donnée recu
        printf("message du client %s : %d\n", inet_ntoa(infoClient.sin_addr), donneeRecue);

        //recuperer la donnée à envoyer
        switch (donneeRecue) {
            case 'd': t = time(NULL);
                donneeAEnvoyerD = localtime(&t);
                break;
            case 'u': donneeAEnvoyerUJL = getenv("USER");
                break;
            case 'j': donneeAEnvoyerUJL = getenv("CINNAMON_VERSION");
                break;
            case 'l': donneeAEnvoyerUJL = getenv("LANG");
                break;
        }

        //Envoie de la valeur a envoyer
        if (donneeRecue == 'd') {
            //Si le client demande la date
            retour = sendto(socClient, donneeAEnvoyerD, sizeof(*donneeAEnvoyerD), 0, (struct sockaddr_in *) &infoClient, sizeof (infoClient));
            if (retour == -1) {
                printf("pb envoie : %s \n", strerror(errno));
                exit(errno);
            }
        } else {
            //Si le client demande l'utilisateur du serveur, la version du gestionnaire
            //graphique ou l'encodage des caractere du serveur
            retour = sendto(socClient, donneeAEnvoyerUJL, NB_CARA, 0, (struct sockaddr_in *) &infoClient, sizeof (infoClient));
            if (retour == -1) {
                printf("pb envoie : %s \n", strerror(errno));
                exit(errno);
            }
        }
    }
    // fermer socket
    close(soc);
}

