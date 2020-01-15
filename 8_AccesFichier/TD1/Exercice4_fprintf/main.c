
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "biblio.h"
#define NBPERSONNES 5

int main() {
    FILE *texte;
    typePersonne *personne[NBPERSONNES];
    int i;
    int valRetour;
    
    texte = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/8_AccesFichier/textePersonneFprintf.txt", "w+");
    if(texte == NULL){
        printf( "%s\n", strerror( errno ));
        exit( errno );
    }
    
    for(i=0; i<NBPERSONNES; i++){
        personne[i] = (typePersonne *) malloc(sizeof(typePersonne));
    }
    
    for(i=0; i<NBPERSONNES; i++){
        //creerPersonnes(personne[i]);
        strcpy(personne[i]->nom, "to");
        strcpy(personne[i]->prenom, "to");
        personne[i]->age = 18;
        personne[i]->poids = 100.5;
        personne[i]->sexe = 'm';
    }
    
    for(i=0; i<NBPERSONNES; i++){
        valRetour = fprintf(texte,"%s %s %d %f %c\n ", personne[i]->nom, personne[i]->prenom, personne[i]->age, personne[i]->poids, personne[i]->sexe);
        if(valRetour < 0){
            printf( "%s\n", strerror( errno ) );
            exit( errno );
        }
    }

    return (0);
}

