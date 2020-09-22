/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 22 septembre 2020, 11:20
 */

#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 255

/*
 * 
 */
int main(int argc, char** argv) {
    int pid1, pid2, pid3, pid4, pid5, pid6;
    char message[BUFSIZE];
    pid1 = fork();
    if (pid1 == 0) //p3
    {
        pid2 = fork();
        if (pid2 == 0){ //p2
            sprintf(message,"p2 pid=%d ppid=%d",getpid(), getppid());
            boite("boite2",message);
        }else{  //p3
            pid3 = fork();
            if (pid3 == 0){ //P4
                sprintf(message,"p4 pid=%d ppid=%d",getpid(), getppid());
                boite("boite4",message);
            }else{ //p3
                pid4 = fork();
                if (pid4 == 0){ //p5
                    pid5 = fork();
                    if (pid5 == 0){ //p6
                        sprintf(message,"p6 pid=%d ppid=%d",getpid(), getppid());
                        boite("boite6",message);
                    }else{  //p5
                        pid6 = fork();
                        if (pid6 == 0){ //p7
                            sprintf(message,"p7 pid=%d ppid=%d",getpid(), getppid());
                            boite("boite7",message);
                        }else{  //p5
                            sprintf(message,"p5 pid=%d ppid=%d",getpid(), getppid());
                            boite("boite5",message);
                        }
                    }
                }else{  //p3
                    sprintf(message,"p3 pid=%d ppid=%d",getpid(), getppid());
                    boite("boite3",message);
                }
            }
        }
    }else {   //p1
        sprintf(message,"p1 pid=%d ppid=%d",getpid(), getppid());
        boite("boite1",message);
    }
    return (EXIT_SUCCESS);
}

