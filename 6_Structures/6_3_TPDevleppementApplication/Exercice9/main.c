
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
    typeAdherent *adUn[NBMAXADHE];
    //adUn = (typeAdherent *) malloc(sizeof(typeAdherent));
    adUn[1] = creerUnAdherent();
    afficherUnAdherent(adUn[1]);
    
    return (0);
}

