
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 15 janvier 2020, 11:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "biblio.h"


int main() {
    FILE *fch;
    int valRetour;
    size_t retour;
    typeEnTeteFichierBmp enTeteBmp;
    typeEnTeteImage enTeteImg;
    
    
    fch = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/imgBMP/plasma.bmp", "r");
    if(fch == NULL){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    retour = fread(&enTeteBmp, sizeof(typeEnTeteFichierBmp), 1, fch);
    if(retour != 1){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    valRetour = fseek(fch, 14, SEEK_SET);
    if(valRetour != 0){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    retour = fread(&enTeteImg, sizeof(typeEnTeteImage), 1, fch);
    if(retour != 1){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    afficherEnTeteFichierBmp(enTeteBmp);
    printf("___________________\n");
    afficherEnTeteImageBmp(enTeteImg);
    
    valRetour = fclose(fch);
    if(valRetour == EOF){
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    return (0);
}

