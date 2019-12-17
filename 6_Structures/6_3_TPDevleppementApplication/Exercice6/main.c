
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
    typeAdherent *adUn;
    adUn = (typeAdherent *) malloc(sizeof(typeAdherent));
    int i;
    
    strcpy(adUn->nom, "Bourgouin");
    strcpy(adUn->prenom, "Charly");
    adUn->dateDeNaissance.jour = 25;
    adUn->dateDeNaissance.mois = 06;
    adUn->dateDeNaissance.annee = 2001;
    for(i=0; i<5; i++) {
        adUn->activites[i] = -1;
    }
    adUn->activites[0] = BASKETBALL;
    adUn->activites[1] = SQUASH;
    adUn->nbActivites = 0;
    for(i=0; i<5; i++) {
        if(adUn->activites[i] == NATATION|| adUn->activites[i] == BASKETBALL || adUn->activites[i] == HANDBALL || adUn->activites[i] == SQUASH || adUn->activites[i] == TENNIS) {
            adUn->nbActivites++;
        }
    }
    adUn->numCarte = 213;
    afficherUnAdherent(adUn);
    
            
    return (0);
}

