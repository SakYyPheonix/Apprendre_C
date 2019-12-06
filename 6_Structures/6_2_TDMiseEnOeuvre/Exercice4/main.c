
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
     * 
    titi = creePersonnePtr();
    
    afficherPersonnePtr(titi);

    
    return (0);
}

