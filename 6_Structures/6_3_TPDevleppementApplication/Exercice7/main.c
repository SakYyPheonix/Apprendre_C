
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
    typeAdherent *adherent[NBMAXADHE];
    //adUn = (typeAdherent *) malloc(sizeof(typeAdherent));
    adherent[1] = creerUnAdherent();
    afficherUnAdherent(adherent[1]);
    
            
    return (0);
}

