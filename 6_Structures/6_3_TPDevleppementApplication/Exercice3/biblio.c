#include "biblio.h"

/*typeAdherent *creePersonne()
{
    typeAdherent *personne;
    personne = (typeAdherent *)malloc(sizeof(typeAdherent));
    
    printf("NOM : ");
    scanf("%s", personne->nom);
    printf("PRENOM : ");
    scanf("%s", personne->prenom);
    printf("N° DE BADGES : ");
    scanf("%s", personne->numBadge);
    
    return personne;
}
*/

void afficherMenu(int nbAdh)
{
    if(nbAdh == 0) {
        printf("A : Ajouter une fiche adhérent\n");
        printf("Q : Quitter\n");
    }else{
        printf("A : Ajouter une fiche adhérent\n");
        printf("S : Supprimer une fiche\n");
        printf("M : Modifier une fiche\n");
        printf("V : Voir le contenu d'une fiche\n");
        printf("L : Voir le contenu de l'ensemble des fiches\n");
        printf("E : Supprimer toutes les fiches\n");
        printf("Q : Quitter\n");
    }
}
