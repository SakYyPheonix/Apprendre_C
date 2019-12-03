
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
    
    int carre;
    int retour;
    
    scanf("%d", &carre);
    retour = calculerCarre(carre);
    printf("%d", retour);
    
    return (0);
}

