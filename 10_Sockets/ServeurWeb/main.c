/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 21 septembre 2020, 10:53
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
#define TAILLE_MAX 500

/*
 * 
 */



int main(int argc, char** argv) {
    int socFA;
    int socClient;
    struct sockaddr_in infoServeur;
    struct sockaddr_in infoClient;
    char donneeAEnvoyer[TAILLE_MAX] = {0};
    char donneeRecue[TAILLE_MAX] = {0};
    int retour;
    int tailleDonnee;
    int tailleInfoClient;


    //creation socket datagram
    socFA = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
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
    infoServeur.sin_port = htons(8888);
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

    socClient = accept(socFA, (struct sockaddr *) &infoClient, &tailleInfoClient);
    if (socClient == -1) {
        printf("pb initialisation soc du client :\n %s \n", strerror(errno));
        exit(errno);
    }

    retour = read(socClient, donneeRecue, TAILLE_MAX);
    if (retour == -1) {
        printf("pb reception : %s \n", strerror(errno));
        exit(errno);
    } else {
        printf("message du client %s : %s", inet_ntoa(infoClient.sin_addr), donneeRecue);
        strcpy(donneeAEnvoyer, "HTTP/1.1 200 OK\nContent-Length: 3301\nContent-Type: text/html;\n\n<html><body><center><h1>c'est mon serveur http</h1></center></body></html>");

        retour = write(socClient, donneeAEnvoyer, TAILLE_MAX);
        if (retour == -1) {
            printf("pb envoie : %s \n", strerror(errno));
            exit(errno);
        }
    }



    // fermer socket
    close(socFA);
    close(socClient);
}

