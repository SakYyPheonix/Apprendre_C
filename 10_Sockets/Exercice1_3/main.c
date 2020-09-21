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

typedef struct{
    unsigned char jour;
    unsigned char mois;
    unsigned short int annee;
    char jourDeLaSemaine[10];
}datePerso;


int main(int argc, char** argv) {
    int soc;
    struct sockaddr_in infoServeur;
    datePerso donneeAEnvoyer;
    datePerso donneeRecue;
    int retour;
    
    
    //creation socket datagram
    soc = socket(PF_INET, SOCK_DGRAM, 0);
    if (soc == -1){
        printf("pb creation socket : %s \n", strerror(errno));
        exit(errno);
    }
    
    //initialisation structure info serv
    
    infoServeur.sin_family = AF_INET;
    infoServeur.sin_port = htons(4444);
    infoServeur.sin_addr.s_addr = inet_addr("127.0.0.1");
    //infoServeur.sin_zero = 0;
    
    //envoyer donne au serveur
    
    donneeAEnvoyer.jour = 14;
    donneeAEnvoyer.mois = 10;
    donneeAEnvoyer.annee = 2020;
    strcpy(donneeAEnvoyer.jourDeLaSemaine, "Lundi");
    retour = sendto(soc, &donneeAEnvoyer, sizeof(donneeAEnvoyer), 0, (struct sockaddr_in *) &infoServeur, sizeof(infoServeur));
    if (retour==-1){
        printf("pb envoie : %s \n", strerror(errno));
        exit(errno);
    }
    
    //recevoir la donne en provenance du serveur
    
    retour = recvfrom(soc, &donneeRecue, sizeof(donneeRecue), 0, (struct sockaddr_in *) &infoServeur, sizeof(infoServeur));
    if (retour==-1){
        printf("pb envoie : %s \n", strerror(errno));
        exit(errno);
    }
    //afficher la donne
    
    // fermer socket
    close(soc);
    return (EXIT_SUCCESS);
}

