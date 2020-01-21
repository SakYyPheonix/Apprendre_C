
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
    typeEnTeteFichierBmp enTeteBmp;
    typeCouleur palette[NBCOULEURS];
    unsigned int largeur = 640;
    unsigned int hauteur = 480;
    unsigned int largeur4;
    int i;
    int u;
    char buffer[1024];

    fchFin = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/imgBMP/Exercice5.bmp", "w+");
    afficherErreur();
    
    if((largeur%4) != 0){
        largeur4 = (largeur/4)*4 + 4;
    }
    else
    {
        largeur4 = largeur;
    }
    
    enTeteBmp.signature[0] = 'B';
    enTeteBmp.signature[1] = 'M';
    enTeteBmp.tailleFichier = 787510;
    enTeteBmp.reserve = 0;
    enTeteBmp.adrInfImg = 1078;
    enTeteBmp.enTeteImage.tailleET = sizeof(enTeteBmp);
    enTeteBmp.enTeteImage.largeurImg = 640;
    enTeteBmp.enTeteImage.hauteurImg = 480;
    enTeteBmp.enTeteImage.nbDP = 
    

    enTeteImg.hauteurImg = 480;
    enTeteImg.largeurImg = 640;
    enTeteImg.tailleImg = 480 * 640;

    retour = fwrite(&enTeteBmp, sizeof (typeEnTeteFichierBmp), 1, fchFin);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    retour = fwrite(&enTeteImg, sizeof (typeEnTeteImage), 1, fchFin);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    palette[0].b = 255;
    palette[0].g = 0;
    palette[0].r = 0;
    palette[0].a = 0;

    palette[1].b = 255;
    palette[1].g = 255;
    palette[1].r = 255;
    palette[1].a = 0;

    palette[2].b = 0;
    palette[2].g = 0;
    palette[2].r = 255;
    palette[2].a = 0;

    retour = fwrite(palette, sizeof (typeCouleur), NBCOULEURS, fchFin);
    if (retour != NBCOULEURS) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    for (i = 0; i < 480; i++) {
        retour = fwrite(&buffer[0], sizeof (char), 213, fchFin);
        if (retour != 213) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        retour = fwrite(&buffer[1], sizeof (char), 214, fchFin);
        if (retour != 214) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        retour = fwrite(&buffer[2], sizeof (char), 213, fchFin);
        if (retour != 213) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
    }
    retour = fwrite("00", sizeof (char), 2, fchFin);
        if (retour != 2) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
    
    /*
        int nb;
        while((nb = fread(buffer, sizeof(char), 1024, fchInit))>0){
            retour = fwrite(buffer, sizeof(char), nb, fchFin);
            if(retour != nb){
                printf("%s\n", strerror(errno));
                exit(errno);
            }
        }
     */

    valRetour = fclose(fchInit);
    if (valRetour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    valRetour = fclose(fchFin);
    if (valRetour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    return (0);
}

