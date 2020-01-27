
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
    typeBateau * boat[NBBATEAU];
    int etat[NBBATEAU];
    int compteurEtat = 0;
    int coulee[NBBATEAU];
    int compteurcoulee = 0;
    int i;
    int u;
    int coordonneX;
    char coordonneYChar;
    int coordonneY;
    int etatOld;

    //Allocations de la memoire et initialisations des tableaux
    for (i = 0; i < NBBATEAU; i++) {
        boat[i] = (typeBateau *) malloc(sizeof (typeBateau));
        etat[i] = 0;
        coulee[i] = 0;
    }

    //declarations des bateaux
    boat[0]->x = 5;
    boat[0]->y = 8;
    boat[0]->taille = 4;
    boat[0]->sens = 'H';
    strcpy(boat[0]->nom, "Cuirassé");
    for (i = 0; i < boat[0]->taille; i++) {
        boat[0]->cases[i] = 0;
    }

    boat[1]->x = 3;
    boat[1]->y = 3;
    boat[1]->taille = 3;
    boat[1]->sens = 'V';
    strcpy(boat[1]->nom, "Croiseur");
    for (i = 0; i < boat[1]->taille; i++) {
        boat[1]->cases[i] = 0;
    }

    //boucle de partie
    do {
        //Saisies des coordonnées visée
        
        do {
            printf(" saisir la zone visée : ");
            scanf(" %c%d", &coordonneYChar, &coordonneX);
            coordonneY = (int) (coordonneYChar - 'A') + 1;
        } while (coordonneX <= 0 || coordonneX >= 11 || coordonneY <= 0 && coordonneY >= 13);

        //verifications des bateaux
        compteurEtat = 0;
        compteurcoulee = 0;
        for (i = 0; i < NBBATEAU; i++) {
            if (etat[i] != boat[i]->taille) {
                etatOld = etat[i];
                etat[i] = torpillerBateau(boat[i], coordonneX, coordonneY);
                if(etatOld == etat){
                    compteurEtat++;
                }
            } 
            if (etat[i] == boat[i]->taille) {
                printf(" %s coulée !!\n", boat[i]->nom);
                compteurcoulee++;
            }
        }
        if(compteurEtat == NBBATEAU){
            printf("coup dans l'eau");
        }
        
    }while (compteurcoulee != NBBATEAU);

    return (0);
}


