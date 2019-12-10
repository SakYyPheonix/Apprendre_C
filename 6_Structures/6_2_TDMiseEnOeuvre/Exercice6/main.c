
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 décembre 2019, 15:03
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main() {
    typePersonne adherent1;
    
    printf("NOM : ");
    scanf("%s", adherent1.nom);
    printf("PRENOM : ");
    scanf("%s", adherent1.prenom);
    printf("N° DE BADGES : ");
    scanf("%s", adherent1.numBadge);
    
    printf("Identiter : %s %s numero : %s", adherent1.prenom, adherent1.nom, adherent1.numBadge);

    return (0);
}

