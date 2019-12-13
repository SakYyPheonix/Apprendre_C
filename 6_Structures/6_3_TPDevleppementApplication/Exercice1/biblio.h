

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 6 décembre 2019, 15:04
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#define NBCARAMAX 50
#define NBCARABADGE 11

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct {
        char nom[NBCARAMAX];
        char prenom[NBCARAMAX];
        typeDate dateDeNaissance;
        int nbActivites;
        sports activites[5];
        int numCarte;
    }typeAdherent;
    
    typedef struct {
        unsigned int jour;
        unsigned int mois;
        unsigned int annee;
    }typeDate;
    
    typedef enum {NATATION, BASKETBALL, HANDBALL, SQUASH, TENNIS}sports;
    
    //typeAdherent *creePersonne();
    void afficherMenu(int nbAdh);

#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

