/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 28 janvier 2020, 13:39
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#pragma pack(push, 1)

#ifdef __cplusplus
extern "C" {
#endif
  
typedef struct
{
    unsigned int tailleEnTete;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilises;
    unsigned int nbCouleursImportantes;
} typeEnTeteImageBmp;

typedef struct
{
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresseImg;
    typeEnTeteImageBmp EnTeteImageBmp;
} typeEnTeteFichierBmp; 

typedef struct {
        unsigned char b;
        unsigned char g;
        unsigned char r;
        unsigned char a;
    }typeCouleur;

void afficherErreur();

void decompressBmp(char source[], char destination[]);

void compressBmp(char source[], char destination[]);


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

