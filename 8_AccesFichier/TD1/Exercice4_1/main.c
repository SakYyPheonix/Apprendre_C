
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
        creerPersonnes(personne[i]);
    }
    
    for(i=0; i<NBPERSONNES; i++){
        valRetour = fprintf(texte,"%d : %s %s %d %f %c\n", i, personne[i]->nom, personne[i]->prenom, personne[i]->age, personne[i]->poids, personne[i]->sexe);
        if(valRetour < 0){
            printf( "%s\n", strerror( errno ) );
            exit( errno );
        }
    }

    return (0);
}

