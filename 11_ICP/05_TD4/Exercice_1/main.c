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
    char chaineEnvois[TAILLEMAX];
    char chaineReception[TAILLEMAX];
    
    if (pipe(tube) == 0){
        pid = fork();
        if(pid == 0){   //p2
            memset(chaineReception, '\0', TAILLEMAX);
            read(tube[0], chaineReception, TAILLEMAX);
            printf("message du pere : %s\n", chaineReception);
        }else{  //p1
            strcpy(chaineEnvois, "je suis ton pere");
            write(tube[1], chaineEnvois, TAILLEMAX);
        }
    }
    return (EXIT_SUCCESS);
}

