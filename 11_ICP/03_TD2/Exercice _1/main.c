/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 29 septembre 2020, 10:39
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int pid1;
    pid_t retour;
    int status;
    pid1 = fork();
    if (pid1 == 0) { //pid2
        retour = waitpid(getppid(), &status, 0);
        printf("P2 : pid=%d, ppid=%d\n", getpid(), getppid());
    } else { //pid1
        sleep(2);
        printf("P1 : pid=%d, ppid=%d\n", getpid(), getppid());
    }
    

    return EXIT_SUCCESS;
}

