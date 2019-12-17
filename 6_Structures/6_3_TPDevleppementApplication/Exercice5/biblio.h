

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 6 décembre 2019, 15:04
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NBCARAMAX 50
#define NBCARABADGE 11

#ifdef __cplusplus
extern "C" {
#endif
        
    typedef struct date{
        unsigned int jour;
        unsigned int mois;
        unsigned int annee;
    } typeDate;
    
    typedef enum {NATATION, BASKETBALL, HANDBALL, SQUASH, TENNIS} sports;

    typedef struct adherent{
        char nom[NBCARAMAX];
        char prenom[NBCARAMAX];
        typeDate dateDeNaissance;
        int nbActivites;
        sports activites[5];
        int numCarte;
    } typeAdherent;
    
    //typeAdherent *creePersonne();
    void afficherMenu(int nbAdh);
    
    void afficherActivite(sports Activ);


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */
