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

int main(int argc, char** argv) {
    int socFA;
    int socClientReception;
    int socClientEnvoie;
    struct sockaddr_in infoServeur;
    struct sockaddr_in infoClient;
    char donneeAEnvoyer[NB_CARA];
    char donneeRecue[NB_CARA];
    int retour;
    int tailleDonnee;
    int tailleInfoClient;


    //creation socket datagram
    socFA = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socFA == -1) {
        printf("pb creation socket : %s \n", strerror(errno));
        exit(errno);
    }

    socClientReception = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socClientReception == -1) {
        printf("pb creation socket client Reception : %s \n", strerror(errno));
        exit(errno);
    }
    socClientEnvoie = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socClientEnvoie == -1) {
        printf("pb creation socket client Envoie : %s \n", strerror(errno));
        exit(errno);
    }

    //initialisation structure info serv

    infoServeur.sin_family = AF_INET;
    infoServeur.sin_port = htons(9999);
    infoServeur.sin_addr.s_addr = htonl(INADDR_ANY);

    retour = bind(socFA, (struct sockaddr *) &infoServeur, sizeof (infoServeur));
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

    socClientReception = accept(socFA, (struct sockaddr *) &infoClient, &tailleInfoClient);
    if (socClientReception == -1) {
        printf("pb initialisation soc du client Reception: %s \n", strerror(errno));
        exit(errno);
    }
    socClientEnvoie = accept(socFA, (struct sockaddr *) &infoClient, &tailleInfoClient);
    if (socClientEnvoie == -1) {
        printf("pb initialisation soc du client Envoie: %s \n", strerror(errno));
        exit(errno);
    }

    while (strcmp(donneeAEnvoyer, "F") != 0) {
        //recevoir la donne en provenance du serveur
        retour = read(socClientReception, donneeRecue, NB_CARA);
        if (retour == -1) {
            printf("pb reception : %s \n", strerror(errno));
            exit(errno);
        }

        //afficher la donne
        printf("donné recu : %s\n", donneeRecue);
        
        gets(donneeAEnvoyer);
        retour = write(socClientEnvoie, donneeAEnvoyer, NB_CARA);
        if (retour == -1) {
            printf("pb envoie : %s \n", strerror(errno));
            exit(errno);
        }
    }

    // fermer socket
    close(socFA);
    close(socClientReception);
    close(socClientEnvoie);
}

