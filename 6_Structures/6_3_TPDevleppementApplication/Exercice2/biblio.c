#include "biblio.h"

typePersonne *creePersonne()
{
    typePersonne *personne;
    personne = (typePersonne *)malloc(sizeof(typePersonne));
    
    printf("NOM : ");
    scanf("%s", personne->nom);
    printf("PRENOM : ");
    scanf("%s", personne->prenom);
    printf("N° DE BADGES : ");
    scanf("%s", personne->numBadge);
    
    return personne;
}

