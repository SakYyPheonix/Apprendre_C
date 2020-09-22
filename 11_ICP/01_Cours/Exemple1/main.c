/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 22 septembre 2020, 10:30
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    fork();
    fork();
    fork();
    printf("* ");
    return 0;
}

