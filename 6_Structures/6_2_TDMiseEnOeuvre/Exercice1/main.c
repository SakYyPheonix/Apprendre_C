
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
    
    toto = creePersonne();

    printf("%s %s est nee en %u, il mesure %.2f m et pese %.2f kg\n", toto.prenom, toto.nom, toto.annee, toto.taille, toto.poids);
    return (0);
}

