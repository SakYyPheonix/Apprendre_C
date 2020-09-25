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
#define NB_CARA 600

/*
 * 
 */
int main(int argc, char** argv) {
    int socEnvoie;
    int socReception;
    struct sockaddr_in infoServeur;
    char donneeAEnvoyer[NB_CARA];
    char donneeRecue[NB_CARA];
    int retour;
    int tailleStr;


    //creation socket datagram
    socEnvoie = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socEnvoie == -1) {
        printf("pb creation socket d'envoie : %s \n", strerror(errno));
        exit(errno);
    }
    socReception = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socReception == -1) {
        printf("pb creation socket de Reponse : %s \n", strerror(errno));
        exit(errno);
    }

    //initialisation structure info serv
    infoServeur.sin_family = AF_INET;
    infoServeur.sin_port = htons(9999);
    infoServeur.sin_addr.s_addr = inet_addr("172.18.58.70");
    /*infoServeur.sin_zero = 0;*/

    //envoyer donne au serveur
    retour = connect(socEnvoie, (struct sockaddr *) &infoServeur, sizeof (infoServeur));
    if (retour == -1) {
        printf("pb de connection : %s \n", strerror(errno));
        exit(errno);
    }
    retour = connect(socReception, (struct sockaddr *) &infoServeur, sizeof (infoServeur));
    if (retour == -1) {
        printf("pb de connection : %s \n", strerror(errno));
        exit(errno);
    }

    //envoyer le message
    while (strcmp(donneeAEnvoyer, "F") != 0) {
        gets(donneeAEnvoyer);
        retour = write(socEnvoie, donneeAEnvoyer, NB_CARA);
        if (retour == -1) {
            printf("pb envoie : %s \n", strerror(errno));
            exit(errno);
        }

        //recevoir la donne en provenance du serveur
        retour = read(socReception, donneeRecue, NB_CARA);
        if (retour == -1) {
            printf("pb reception : %s \n", strerror(errno));
            exit(errno);
        }

        //afficher la donne
        printf("donné recu : %s \n", donneeRecue);
    }

    // fermer socket
    close(socEnvoie);
    close(socReception);

    return 0;
}

