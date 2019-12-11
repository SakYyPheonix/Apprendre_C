
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
    printf("Num du Mois : ");
    do {
        scanf("%d", &valMois);
    }while(valMois<1 || valMois>12);
    mois = (char *) malloc((strlen(moisNom(valMois))+1)*sizeof(char));
    mois = moisNom(valMois);
    printf("%s", mois);

    return (0);
}

