
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
    typePersonne *Personne;
    Personne = (typePersonne *) malloc(sizeof(typePersonne));
    
    Personne = creePersonne();
    
    printf("Identiter : %s %s numero : %s", Personne->prenom, Personne->nom, Personne->numBadge);

    return (0);
}

