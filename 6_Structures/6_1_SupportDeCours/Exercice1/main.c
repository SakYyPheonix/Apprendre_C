/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 5 décembre 2019, 10:42
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblio.h"

int main() {
    typePersonne robert;
    
    strcpy(robert.nom,"bidochon");
    strcpy(robert.prenom, "robert");
    robert.annee = 1954;
    robert.taille = 1.65;
    robert.poids = 75.3;
    printf("%s %s est nee en %u, il mesure %.2f m et pese %.2f", robert.prenom, robert.nom, robert.annee, robert.taille, robert.poids);

    return (0);
}

