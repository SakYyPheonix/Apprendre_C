
/* 
 * File:   main.c
 * Author: charl
 *
 * Created on 4 décembre 2019, 21:16
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main() {
    int valMois;
    char mois[NBMAXCARA];
    
    printf("Num du Mois : ");
    scanf("%d", &valMois);
    moisNom(valMois, mois);
    printf("%s", mois);

    return (0);
}

