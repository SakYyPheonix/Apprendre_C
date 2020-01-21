
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
#define NBCOULEURS 256


int main() {
    FILE *fchInit;
    FILE *fchFin;
    int valRetour;
    size_t retour;
    typeEnTeteFichierBmp enTeteBmp;
    typeEnTeteImage enTeteImg;
    typeCouleur palette[NBCOULEURS];
    int i;
    char buffer[1024];
    
    
    fchInit = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/imgBMP/plasma.bmp", "r");
    if(fchInit == NULL){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    fchFin = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/imgBMP/plasmaModif.bmp", "w+");
    if(fchFin == NULL){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    retour = fread(&enTeteBmp, sizeof(typeEnTeteFichierBmp), 1, fchInit);
    if(retour != 1){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    retour = fread(&enTeteImg, sizeof(typeEnTeteImage), 1, fchInit);
    if(retour != 1){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    retour = fwrite(&enTeteBmp, sizeof(typeEnTeteFichierBmp), 1, fchFin);
    if(retour != 1){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    retour = fwrite(&enTeteImg, sizeof(typeEnTeteImage), 1, fchFin);
    if(retour != 1){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    
    
    
    retour = fread(palette, sizeof(typeCouleur), NBCOULEURS, fchInit);
    if(retour != NBCOULEURS){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    for(i=0; i<NBCOULEURS; i++){
        palette[i].r = (palette[i].r + palette[i].b + palette[i].g)/3;
        palette[i].b = 0;
        palette[i].g = 0;
    }
    retour = fwrite(palette, sizeof(typeCouleur), NBCOULEURS, fchFin);
    if(retour != NBCOULEURS){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    int nb;
    while((nb = fread(buffer, sizeof(char), 1024, fchInit))>0){
        retour = fwrite(buffer, sizeof(char), nb, fchFin);
        if(retour != nb){
            printf("%s\n", strerror(errno));
            exit(errno);
        }
    }
    
    
    valRetour = fclose(fchInit);
    if(valRetour == EOF){
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    valRetour = fclose(fchFin);
    if(valRetour == EOF){
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    return (0);
}

