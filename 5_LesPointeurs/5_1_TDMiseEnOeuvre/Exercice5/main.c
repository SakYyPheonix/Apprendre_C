
/* 
 * File:   main.c
 * Author: charl
 *
 * Created on 4 décembre 2019, 21:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"

int main() {
    int valMois;
    char *mois;
    mois = (char *) malloc(NBMAXCARA*sizeof(char));
    printf("Num du Mois : ");
    scanf("%d", &valMois);
    strcpy(mois, moisNom(valMois));
    printf("%s", mois);

    return (0);
}

