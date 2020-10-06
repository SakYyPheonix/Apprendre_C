/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 29 septembre 2020, 11:31
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

/*
 * 
 */
void traitement(int sig)
{
	(void) signal(SIGUSR1, traitement);
	printf("un signal SIGUSR1 ppid :%d\n", getppid());
}

int main(int argc, char** argv) {

    int pid1, pid2;
    (void) signal(SIGUSR1, traitement);
    int retour;
    pid1 = fork();
    if (pid1 == 0) { //P2
        pid2 = fork();
        if (pid2 == 0) { //P3
            printf("P3 : pid=%d, ppid=%d\n", getpid(), getppid());
            retour = kill(getppid, SIGUSR1);
        } else { //P2
            printf("P2 : pid=%d, ppid=%d\n", getpid(), getppid());
            retour = kill(getppid, SIGUSR1);
        } 
    }else { //P1
        printf("P1 : pid=%d, ppid=%d\n", getpid(), getppid());    
    }

    return 0;
}

