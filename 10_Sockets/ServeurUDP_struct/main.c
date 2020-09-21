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
    int soc;
    int socClient;
    struct sockaddr_in infoServeur;
    struct sockaddr_in infoClient;
    datePerso donneeAEnvoyer;
    datePerso donneeRecue;
    int retour;
    int tailleDonnee;
    int tailleInfoClient;
    int i = 0;


    //creation socket datagram
    soc = socket(PF_INET, SOCK_DGRAM, 0);
    if (soc == -1) {
        printf("pb creation socket : %s \n", strerror(errno));
        exit(errno);
    }

    socClient = socket(PF_INET, SOCK_DGRAM, 0);
    if (socClient == -1) {
        printf("pb creation socket client : %s \n", strerror(errno));
        exit(errno);
    }

    //initialisation structure info serv

    infoServeur.sin_family = AF_INET;
    infoServeur.sin_port = htons(3333);
    infoServeur.sin_addr.s_addr = htonl(INADDR_ANY);

    retour = bind(soc, (struct sockaddr *) &infoServeur, sizeof (infoServeur));
    if (retour == -1) {
        printf("pb bind : %s \n", strerror(errno));
        exit(errno);
    }
    //recevoir la donne en provenance du serveur
    retour = -2;
    
    do {
        retour = recvfrom(soc, &donneeRecue, sizeof (datePerso), 0, (struct sockaddr *) &infoClient, &tailleInfoClient);
        if (retour == -1) {
            printf("pb envoie : %s \n", strerror(errno));
            exit(errno);
        }
    } while (retour == -2);

    printf("message du client %s : %.2f ", inet_ntoa(infoClient.sin_addr), donneeRecue);
    
    donneeAEnvoyer = donneeRecue;
    retour = sendto(socClient, &donneeAEnvoyer, sizeof (donneeAEnvoyer), 0, (struct sockaddr_in *) &infoClient, sizeof(infoClient));
    if (retour == -1) {
        printf("pb envoie : %s \n", strerror(errno));
        exit(errno);
    }

    // fermer socket
    close(soc);
}

