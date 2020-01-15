
#include "biblio.h"

void creerPersonnes(typePersonne *Perso){
    printf("Donner les informations : \n");
    printf(" NOM : ");
    scanf("%s", Perso->nom);
    printf(" PRENOM : ");
    scanf("%s", Perso->prenom);
    printf(" AGE : ");
    scanf("%d", &Perso->age);
    printf(" POIDS : ");
    scanf("%f", &Perso->poids);
    do{
        printf(" SEXE (m = homme, f = femme) : ");
        scanf("%c", &Perso->sexe);
    }while(Perso->sexe != 'm' && Perso->sexe != 'f');
}

