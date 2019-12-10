
/* 
 * File:   main.c
 * Author: charl
 *
 * Created on 4 décembre 2019, 22:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"

int main() {
    char *avecE;
    avecE = (char *) malloc(NBCARAMAX * sizeof(char));
    char *sansE;
    sansE = (char *) malloc(NBCARAMAX * sizeof(char));
    
    gets(avecE);
    strcpy(sansE, supprimerE(avecE));
    printf("%s", sansE);
    
    return (0);
}

