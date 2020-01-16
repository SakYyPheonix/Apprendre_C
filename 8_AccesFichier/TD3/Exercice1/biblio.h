/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 15 janvier 2020, 11:49
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct enTeteFichierBmp {
        short int signature;
        unsigned int tailleFichier;
        int reserve;
        int adrInfImg;
    }typeEnTeteFichierBmp;
    
    typedef struct enTeteImage {
        int tailleET;
        unsigned int largeurImg;
        unsigned int hauteurImg;
        short int nbDP;
        short int bitPPix;
        int TypeDeComp;
        int tailleImg;
        int resHor;
        int resVer;
        int nbCouleur;
        int nbCouImp;
    }typeEnTeteImage;
    
    void afficherEnTeteFichierBmp(typeEnTeteFichierBmp bmp);
    
    void afficherEnTeteImageBmp(typeEnTeteImage img);
    
    
#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

