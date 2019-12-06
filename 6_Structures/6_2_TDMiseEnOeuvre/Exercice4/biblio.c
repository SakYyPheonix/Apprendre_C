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

void afficherPersonne(typePersonne p)
{
    printf("%s %s est nee en %u, il mesure %.2f m et pese %.2f kg\n", p.prenom, p.nom, p.annee, p.taille, p.poids);
}

typePersonne *creePersonnePtr()
{
    typePersonne *unePersonne;
    
    unePersonne = (typePersonne *) malloc(sizeof(typePersonne));
    
    printf("nom : ");
    scanf("%s", unePersonne->nom);
    printf("Prenom : ");
    scanf("%s", unePersonne->prenom);
    printf("annee de naissance : ");
    scanf("%u", &unePersonne->annee);
    printf("taille : ");
    scanf("%f", &unePersonne->taille);
    printf("poids : ");
    scanf("%f", &unePersonne->poids);
    
    return unePersonne;
}

void afficherPersonnePtr(typePersonne *p)
{
    printf("%s %s est nee en %u, il mesure %.2f m et pese %.2f kg\n", p->prenom, p->nom, p->annee, p->taille, p->poids);
}

