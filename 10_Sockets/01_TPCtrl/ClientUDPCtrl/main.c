/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 28 septembre 2020, 9:16
 * Description : Menu de commande pour consulter des informations
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
    char address[NB_CARA];
    struct sockaddr_in infoServeur;
    int donneeUtilisateur;
    char donneeAEnvoyer;
    char donneeRecueUJL[NB_CARA];
    struct tm donneeRecueD;
    int retour;
    int tailleStr;


    //creation socket
    soc = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (soc == -1) {
        printf("pb creation socket : %s \n", strerror(errno));
        exit(errno);
    }

    //Demande de l'adresse du serveur
    printf("Quel est l'adresse du serveur ? ");
    gets(address);

    //initialisation structure info serv
    infoServeur.sin_family = AF_INET;
    infoServeur.sin_port = htons(4444);
    infoServeur.sin_addr.s_addr = inet_addr(address);


    do {
        //affichage du menu
        printf("1 - Date et heure du serveur\n");
        printf("2 - Utilisateur ayant lance le serveur\n");
        printf("3 - Chemin de l'environnement JAVA sur le serveur\n");
        printf("4 - Encodage des caractères sur le serveur\n");
        printf("5 - Quitter le programme\n");

        //choix de l'utilisateur
        printf("votre choix : ");
        do {
            scanf(" %d", &donneeUtilisateur);
        } while (donneeUtilisateur < 1 || donneeUtilisateur > 5);
        switch (donneeUtilisateur) {
            case 1 : donneeAEnvoyer = 'd';
                break;
            case 2 : donneeAEnvoyer = 'u';
                break;
            case 3 : donneeAEnvoyer = 'j';
                break;
            case 4 : donneeAEnvoyer = 'l';
                break;
        }

        //envoyer donne au serveur
        retour = sendto(soc, &donneeAEnvoyer, sizeof(donneeAEnvoyer), 0, (struct sockaddr_in *) &infoServeur, sizeof (infoServeur));
        if (retour == -1) {
            printf("pb envoie : %s \n", strerror(errno));
            exit(errno);
        }
        
        //recevoir la donne en provenance du serveur
        if(donneeUtilisateur == 1){
            //si l'utilisateur veut la date
            retour = recvfrom(soc, &donneeRecueD, sizeof (struct tm), 0, (struct sockaddr_in *) &infoServeur, &tailleStr);
            if (retour == -1) {
                printf("pb reception : %s \n", strerror(errno));
                exit(errno);
            }
        }else{
            //si l'utilisateur veut l'utilisateur du serveur, la version du gestionnaire
            //graphique ou l'encodage des caractere du serveur
            retour = recvfrom(soc, donneeRecueUJL, NB_CARA, 0, (struct sockaddr_in *) &infoServeur, &tailleStr);
            if (retour == -1) {
                printf("pb reception : %s \n", strerror(errno));
                exit(errno);
            }
        }
        
        //afficher la donne
        switch (donneeUtilisateur) {
            case 1: printf("%d/%d/%d ", donneeRecueD.tm_mday, donneeRecueD.tm_mon+1, donneeRecueD.tm_year);
                    printf("%d:%d:%d \n", donneeRecueD.tm_hour, donneeRecueD.tm_min, donneeRecueD.tm_sec);
                break;
            case 2: printf("Utilisateur : %s\n", donneeRecueUJL);
                break;
            case 3: printf("Version du gestionnaire graphique : %s\n", donneeRecueUJL);
                break;
            case 4: printf("Encodage des caracteres : %s\n", donneeRecueUJL);
                break;
        }
    } while (donneeUtilisateur != 5);
    
    // fermer socket
    close(soc);
    return 0;
}

