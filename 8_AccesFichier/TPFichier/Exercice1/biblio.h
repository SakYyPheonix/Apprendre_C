

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
#include <errno.h>
#define NBCARAMAX 50
#define NBCARABADGE 11
#define NBMAXADHE 5000
#pragma pack(push, 1)

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
    
    void afficherErreur();
    //typeAdherent *creePersonne();
    void afficherMenu(int nbAdh);
    
    void afficherActivite(sports Activ);
    
    void afficherUnAdherent(typeAdherent *ad);
    
    typeAdherent *creerUnAdherent();
    
    void afficherLesAdherents(typeAdherent *ad[],int nb);

    int ajouterUnAdherent(typeAdherent *tab[], int nb);
    
    int supprimerUnAdherent(typeAdherent *tab[],int nro,int nb);
    
    int supprimerLesAdherents(typeAdherent *ad[],int nb);
    
    void modifierUnAdherents(typeAdherent *ad[], int nro);
    
    void sauvegardeAdherents(typeAdherent *ad[], int nb);
    
    int chargeAdherents(typeAdherent *ad[]);
    

#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */
