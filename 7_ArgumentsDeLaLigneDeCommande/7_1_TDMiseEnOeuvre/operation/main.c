/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 décembre 2019, 11:43
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    float val1, val2;
    char operateur;
    
    if(argc!=4) {
        printf("usage : %s operateur( + | - | x | / ) valeur1 valeur2", argv[0]);
        exit(0);
    }
    sscanf(argv[1], " %c", &operateur);
    sscanf(argv[2], "%f", &val1);
    sscanf(argv[3], "%f", &val2);
    
    switch(operateur) {
        case '+' : printf("%.2f + %.2f = %.2f\n", val1, val2, (val1+val2));
        break;
        case '-' : printf("%.2f - %.2f = %.2f\n", val1, val2, (val1-val2));
        break;
        case 'x' : printf("%.2f x %.2f = %.2f\n", val1, val2, (val1*val2));
        break;
        case '/' : printf("%.2f - %.2f = %.2f\n", val1, val2, (val1/val2));
        break;
    }
    
    return (EXIT_SUCCESS);
}

