/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 septembre 2019, 11:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float val1;
    float val2;
    float somme;
    
    printf("Valeur 1 ?");
    scanf("%f",&val1);
    printf("Valeur 2 ?");
    scanf("%f",&val1);
    somme = val1 + val2;
    printf("la somme est : %f", somme);
    
    return (EXIT_SUCCESS);
}

