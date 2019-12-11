
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 10 décembre 2019, 16:18
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main() {
    char intro[NBMAXCARA] = {"Donner une phrase : "};
    char *chaineRetour;
    chaineRetour = saisirChaine(intro);
    printf("%s", chaineRetour);
    return (0);
}

