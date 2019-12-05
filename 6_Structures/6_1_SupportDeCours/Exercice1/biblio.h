/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 5 décembre 2019, 10:43
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#define NBCARAMAX 50

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct personne{
        char nom[NBCARAMAX];
        char prenom[NBCARAMAX];
        unsigned int annee;
        float taille;
        float poids;
    }typePersonne;


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

