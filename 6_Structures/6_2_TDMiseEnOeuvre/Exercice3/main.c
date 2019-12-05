
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 5 décembre 2019, 11:55
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

/*
 * 
 */
int main() {
    typePersonne toto;
    typePersonne *titi;
    
    toto = creePersonne();

    afficherPersonne(toto);
    
    titi = creePersonnePtr();
    
     printf("%s %s est nee en %u, il mesure %.2f m et pese %.2f kg\n", titi->prenom, titi->nom, titi->annee, titi->taille, titi->poids);
    
    return (0);
}

