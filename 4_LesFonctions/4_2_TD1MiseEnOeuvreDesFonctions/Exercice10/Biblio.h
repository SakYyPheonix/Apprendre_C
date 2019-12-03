/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Biblio.h
 * Author: cbourgouin
 *
 * Created on 12 novembre 2019, 14:28
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#ifdef __cplusplus
extern "C" {
#endif

    float calculerCarre(int val);
    
    float calculerDiscriminant(int val1, int val2, int val3);
    
    void afficherRacines(float val);
    
    void afficherUneLigne(int val);
    
    void afficherUnCarre(int val);
    
    void afficherUnRectangle(int val1, int val2);


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

