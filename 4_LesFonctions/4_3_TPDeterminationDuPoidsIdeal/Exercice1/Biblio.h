/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Biblio.h
 * Author: cbourgouin
 *
 * Created on 26 novembre 2019, 13:28
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#define TAILLEMAX 255

#ifdef __cplusplus
extern "C" {
#endif
    
    void afficheFiche(char* identiteUtil1, char* identiteUtil2, int val, float reel1, float reel2);
    
    void afficherCorpulence(float val);
    
    void afficherMenu();
    
    float calculerPoidsLorentz(char lettre, float reel);
    
    float calculerPoidsDevine(char lettre, float reel);
    
    float calculerPoidsLorentzAge(float val, float reel);

#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

