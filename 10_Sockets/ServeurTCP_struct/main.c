/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 8 septembre 2020, 10:49
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

typedef struct {
    unsigned char jour;
    unsigned char mois;
    unsigned short int annee;
    char jourDeLaSemaine[10];
} datePerso;

int main(int argc, char** argv) {
    int socFA;
    int socClient;
    struct sockaddr_in infoServeur;
    struct sockaddr_in infoClient;
    datePerso donneeAEnvoyer;
    datePerso donneeRecue;
    int retour;
    int tailleDonnee;
    int tailleInfoClient;


    //creation socket datagram
    socFA= socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socFA == -1) {
        printf("pb creation socket : %s \n", strerror(errno));
        exit(errno);
    }

    socClient = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socClient == -1) {
        printf("pb creation socket client : %s \n", strerror(errno));
        exit(errno);
    }

    //initialisation structure info serv

    infoServeur.sin_family = AF_INET;
    infoServeur.sin_port = htons(5555);
    infoServeur.sin_addr.s_addr = htonl(INADDR_ANY);

    retour = bind(socFA, (struct sockaddr *) &infoServeur, sizeof(infoServeur));
    if (retour == -1) {
        printf("pb bind : %s \n", strerror(errno));
        exit(errno);
    }
    //recevoir la donne en provenance du serveur
    retour = listen(socFA, 10);
    if (retour == -1) {
            printf("pb listen : %s \n", strerror(errno));
            exit(errno);
        }
    
    socClient = accept(socFA, (struct sockaddr *) &infoClient, &tailleInfoClient);
    if (socClient == -1) {
            printf("pb initialisation soc du client : %s \n", strerror(errno));
            exit(errno);
        }
    
    retour = -2;
    
    do {
        retour = read(socClient, &donneeRecue, sizeof(datePerso));
        if (retour == -1) {
            printf("pb reception : %s \n", strerror(errno));
            exit(errno);
        }
    } while (retour == -2);

    printf("message du client %s : %d/%d/%d %s", inet_ntoa(infoClient.sin_addr), (int)donneeRecue.jour, (int)donneeRecue.mois, donneeRecue.annee, donneeRecue.jourDeLaSemaine);
    
    donneeAEnvoyer = -1 * donneeRecue;
    retour = write(socClient, &donneeAEnvoyer, sizeof(donneeAEnvoyer));
    if (retour == -1) {
        printf("pb envoie : %s \n", strerror(errno));
        exit(errno);
    }

    // fermer socket
    close(socFA);
    close(socClient);
}

