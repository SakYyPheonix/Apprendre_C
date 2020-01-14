/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: cbourgouin
 *
 * Created on 9 janvier 2020, 15:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#ifndef BIBLIO_H
#define BIBLIO_H
#define NBMAXCAR 50

#ifdef __cplusplus
extern "C" {
#endif

typedef struct personne{
	char nom[NBMAXCAR];
	char prenom[NBMAXCAR];
	int age;
	float poids;
	char sexe ; // 'f' ou 'm'
}typePersonne;

void creerPersonnes(typePersonne *Perso);


#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

