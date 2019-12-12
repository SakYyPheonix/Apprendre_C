/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 12 décembre 2019, 10:27
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#define NBMAXCARA 100

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE }jours;
    typedef enum { FALSE, TRUE }boolean;
    
    boolean estUnPalindrome(char *chaine);


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

