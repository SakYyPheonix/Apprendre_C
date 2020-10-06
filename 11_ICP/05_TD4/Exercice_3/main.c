/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 5 octobre 2020, 10:44
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#define TAILLEMAX 255

/*
 * 
 */
int main(int argc, char** argv) {
    int pid;
    int tube1[2];
    int tube2[2];
    float reponse, envoie;
    char chaineEnvois[TAILLEMAX];
    char chaineReception[TAILLEMAX];
    
    //P1
    if (pipe(tube1) == 0 && pipe(tube2) == 0){
        pid = fork();
        if(pid == 0){
            memset(chaineReception, '\0', TAILLEMAX);;
            read(tube1[0], chaineReception, TAILLEMAX);
            printf("message du pere : %s\n", chaineReception);
            envoie = 52.3;
            write(tube2[1], &envoie, sizeof(float));
        }else{
            strcpy(chaineEnvois, "je suis ton pere");
            write(tube1[1], chaineEnvois, TAILLEMAX);
            read(tube2[0], &reponse, sizeof(float));
            printf("message du fils : %.2f\n", reponse);
        }
    }
    return (EXIT_SUCCESS);
}

