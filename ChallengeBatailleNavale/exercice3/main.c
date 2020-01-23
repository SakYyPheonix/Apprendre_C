
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 10 janvier 2020, 15:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"

int main() {
    typeBateau *cuirasse;
    int etatCuirasse = 0;
    typeBateau *croiseur;
    int etatCroiseur = 0;
    int i;
    int coordonneX;
    char coordonneYChar;
    int coordonneY;

    cuirasse = (typeBateau *) malloc(sizeof (typeBateau));
    croiseur = (typeBateau *) malloc(sizeof (typeBateau));

    cuirasse->x = 5;
    cuirasse->y = 8;
    cuirasse->taille = 4;
    cuirasse->sens = 'H';
    strcpy(cuirasse->nom, "Cuirassé");
    for (i = 0; i < cuirasse->taille; i++) {
        cuirasse->cases[i] = 0;
    }

    croiseur->x = 3;
    croiseur->y = 3;
    croiseur->taille = 3;
    croiseur->sens = 'V';
    strcpy(croiseur->nom, "Croiseur");
    for (i = 0; i < croiseur->taille; i++) {
        croiseur->cases[i] = 0;
    }
    do {
        printf("saisir la zone visée : ");
        do {
            scanf("%d%c", &coordonneX, &coordonneYChar);
            coordonneY = (int) (coordonneYChar - 'A') + 1;
        } while (coordonneX <= 0 || coordonneX >= 11 || coordonneY <= 0 && coordonneY >= 13);

        etatCuirasse = torpillerBateau(cuirasse, coordonneX, coordonneY);
        etatCroiseur = torpillerBateau(croiseur, coordonneX, coordonneY);
    } while (etatCuirasse != 1 && etatCroiseur != 1);
    return (0);
}

