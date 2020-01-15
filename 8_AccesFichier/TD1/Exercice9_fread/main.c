
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "biblio.h"
#define NBPERSONNES 5
#pragma pack(push, 1)

int main() {
    FILE *texte;
    typePersonne personne[NBPERSONNES];
    int i;
    int nbI;
    size_t retour;
    int valRetour;


    texte = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/8_AccesFichier/textePersonneFprintf.txt", "r");
    if (texte == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    for (i = 0; i < NBPERSONNES; i++) {
        valRetour = fscanf(texte, "%s %s %d %f %c\n ", personne[i].nom, personne[i].prenom, &personne[i].age, &personne[i].poids, &personne[i].sexe);
        if (valRetour == EOF) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
    }
    
    for(i=0; i<NBPERSONNES; i++){
        printf("%s\n", personne[i].nom);
        printf("%s\n", personne[i].prenom);
        printf("%d\n", personne[i].age);
        printf("%f\n", personne[i].poids);
        printf(" %c \n\n", personne[i].sexe);
    }
    

    valRetour = fclose(texte);
    if (valRetour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }



    return (0);
}


