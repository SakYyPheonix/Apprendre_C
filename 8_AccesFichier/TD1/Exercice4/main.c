
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
    size_t retour;
    int valRetour;


    texte = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/8_AccesFichier/textePersonneFwritePragma.txt", "w+");
    if (texte == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    for (i = 0; i < NBPERSONNES; i++) {
        //creerPersonnes(personne[i]);
        strcpy(personne[i].nom, "to");
        strcpy(personne[i].prenom, "to");
        personne[i].age = 18;
        personne[i].poids = 100;
        personne[i].sexe = 'm';
    }

    /*int p=NBPERSONNES;
    retour = fwrite(&p, sizeof(int), 1, texte );*/


    retour = fwrite(personne, sizeof (typePersonne), NBPERSONNES, texte);
    if (retour != NBPERSONNES) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }


    valRetour = fclose(texte);
    if (valRetour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }



    return (0);
}

