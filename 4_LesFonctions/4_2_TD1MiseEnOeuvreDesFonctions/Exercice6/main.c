
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 novembre 2019, 14:27
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblio.h"

int main() {
    
    int a, b, c;
    float retour;
    
    scanf("%d %d %d", &a, &b, &c);
    retour = calculerDiscriminant(a, b, c);
    printf("%f", retour);
    
    return (0);
}

