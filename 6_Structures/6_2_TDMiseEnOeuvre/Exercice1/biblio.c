#include "biblio.h"

typePersonne creePersonne()
{
    typePersonne unePersonne;
    
    printf("nom : ");
    scanf("%s", unePersonne.nom);
    printf("Prenom : ");
    scanf("%s", unePersonne.prenom);
    printf("annee de naissance : ");
    scanf("%u", &unePersonne.annee);
    printf("taille : ");
    scanf("%f", &unePersonne.taille);
    printf("poids : ");
    scanf("%f", &unePersonne.poids);
    
    return unePersonne;
}