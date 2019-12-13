
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
    typeDate dateAnniv;
    
    //afficherMenu(5);
    
    dateAnniv.jour = 25;
    dateAnniv.mois = 06;
    dateAnniv.annee = 2001;
    afficheDate(dateAnniv);

    return (0);
}

