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
#include <unistd.h>
#define TAILLEMAX 255

/*
 * 
 */

void traitement(int sig) {
    (void) signal(SIGUSR1, traitement);
    printf("un signal SIGUSR1 ppid :%d\n", getppid());
}

int main(int argc, char** argv) {
    int pid1, pid2;
    int tube[2];
    int reponse, envoie;
    char chaineEnvois[TAILLEMAX];
    char chaineReception[TAILLEMAX];
    (void) signal(SIGUSR1, traitement);

    //P1
    if (pipe(tube) == 0) {
        pid1 = fork();
        if (pid1 == 0) { //P2
            pid2 = fork();
            if (pid2 == 0) { //P3
                printf("P3 : pid=%d, ppid=%d\n", getpid(), getppid());
                envoie = getpid();
                write(tube[1], &envoie, sizeof(int));
                pause();
            } else { //P2
                printf("P2 : pid=%d, ppid=%d\n", getpid(), getppid());
                pause();
            }
        } else { //P1
            printf("P1 : pid=%d, ppid=%d\n", getpid(), getppid());
            kill(pid2, SIGUSR1);
            read(tube[0], &reponse, sizeof(int));
            kill(reponse, SIGUSR1);
            sleep(2);
        }
    }
    return (EXIT_SUCCESS);
}

