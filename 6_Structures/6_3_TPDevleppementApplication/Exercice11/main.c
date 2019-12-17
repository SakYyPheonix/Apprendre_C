
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 décembre 2019, 15:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"

int main() {
    typeAdherent * ad[NBMAXADHE];
    int compteurAdherent = 0;
    int i;
    int adSup;
    char reponse;

    do {
        afficherMenu(compteurAdherent);
        scanf(" %c", &reponse);
        
        switch (reponse) {
            case 'A': compteurAdherent = ajouterUnAdherent(ad, compteurAdherent);
                break;
            case 'S': printf("Adherents a supprimer : ");
                scanf("%d", &adSup);
                compteurAdherent = supprimerUnAdherent(ad, adSup, compteurAdherent);
                break;
            case 'M':;
                break;
            case 'V':;
                break;
            case 'L': afficherLesAdherents(ad, compteurAdherent);
                break;
            case 'E':;
                break;
        }
    } while (reponse != 'Q');

    return (0);
}

