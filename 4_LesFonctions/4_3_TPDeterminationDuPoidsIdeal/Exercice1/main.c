
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 21 novembre 2019, 11:24
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblio.h"
#define TAILLEMAX 255

int main() {
    char nom[TAILLEMAX];
    char prenom[TAILLEMAX];
    char sexe;
    float age;
    float poids;
    float taille;
    float CalculeImc;
    char choixMenu;
    float PoidsIdealCalculer;

    printf("nom : ");
    fgets(nom,TAILLEMAX,stdin);
    
    printf("prenom : ");
    fgets(prenom,TAILLEMAX,stdin);
    
    do {
        printf("sexe (h ou f) : ");
        scanf(" %c", &sexe);
    } while (sexe != 'h' && sexe != 'f');
    printf("age : ");
    scanf("%f", &age);
    printf("taille (en metre) : ");
    scanf("%f", &taille);
    printf("poids (en kg) : ");
    scanf("%f", &poids);
    printf("\n");
    afficheFiche(nom, prenom, age, taille, poids);
    printf("\n");
    CalculeImc = poids / (taille * taille);
    afficherCorpulence(CalculeImc);
    printf("\n");

    do {
        afficherMenu();
        printf("Votre choix : ");
        scanf(" %c", &choixMenu);
        switch (choixMenu) {
            case 'a': PoidsIdealCalculer = calculerPoidsLorentz(sexe, taille);
            printf("Poids ideal selon la formule de lorentz : %.2f\n", PoidsIdealCalculer);
                break;
            case 'b': PoidsIdealCalculer = calculerPoidsDevine(sexe, taille);
            printf("Poids ideal selon la formule de devine : %.2f\n", PoidsIdealCalculer);
                break;
            case 'c': PoidsIdealCalculer = calculerPoidsLorentzAge(age, taille);
            printf("Poids ideal selon la formule de lorentz en tenant compte de l'age : %.2f\n", PoidsIdealCalculer);
                break;
        }
    } while (choixMenu != 'q');
    return (0);
}