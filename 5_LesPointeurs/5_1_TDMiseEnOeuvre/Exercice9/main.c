
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 11 décembre 2019, 10:33
 */

#include <stdio.h>
#include <stdlib.h>

#include "biblio.h"


int main(int argc, char** argv) {
    float a;
    float b;
    float c;
    float *x1;
    float *x2;
    x1 = (float *) malloc(sizeof(float));
    x2 = (float *) malloc(sizeof(float));
    
    printf("Donnez a : ");
    scanf("%f", &a);
    printf("Donnez b : ");
    scanf("%f", &b);
    printf("Donnez c : ");
    scanf("%f", &c);
    
    discriminant(a, b, c, x1, x2);
    
    if(*x1 == 0 && *x2 == 0)
    {
        printf("pas de solutions dans l'ensemble des réels.");
    }
    else
    {
        printf("x1 = %f\n", *x1);
        printf("x2 = %f\n", *x2);
    }

    return (EXIT_SUCCESS);
}

