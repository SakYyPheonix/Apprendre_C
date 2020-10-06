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
    int tube[2];
    int reponse, envoie;
    //char chaineEnvois[TAILLEMAX];
    //char chaineReception[TAILLEMAX];
    
    //P1
    if (pipe(tube) == 0){
        pid = fork();
        if(pid == 0){
            reponse = 0;
            read(tube[0], &reponse, sizeof(int));
            printf("message du pere : %d\n", reponse);
        }else{
            envoie = 52;
            write(tube[1], &envoie, sizeof(int));
        }
    }
    return (EXIT_SUCCESS);
}

