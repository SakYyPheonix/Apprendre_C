/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 28 janvier 2020, 13:19
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    char argument;
    //affichage argc et argv
    
    printf("argc : %d\n", argc);
    for (i = 0; i < 4; i++) {
        printf("argv[%d] : %s\n", i, argv[i]);
    }

    //reconnaissance compression/decompression
    sscanf(argv[1], " %c", &argument);
    if (argc == 4) {
        switch (argument) {
            case 'c': compressBmp(argv[2], argv[3]);
                break;
            case 'd': decompressBmp(argv[2], argv[3]);
                break;
            default: printf("error : argv[1] invalid");
        }
    }else{
        printf("error : argc != 4");
    }
    return (EXIT_SUCCESS);
}

