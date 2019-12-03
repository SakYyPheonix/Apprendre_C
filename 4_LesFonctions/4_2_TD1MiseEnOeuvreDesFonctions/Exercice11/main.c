
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 novembre 2019, 14:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Biblio.h"
#define TAILLEMAX 255

int main() {
    int compteur;
    char chaineDeCara[TAILLEMAX];
    char caraAComp;
    
    gets(chaineDeCara);
    scanf(" %c", &caraAComp);
    compteur = compterSymbole(chaineDeCara, caraAComp);
    printf("%d", compteur);
    return (0);
}

