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

void afficherMenu(int nbAdh) {
    if (nbAdh == 0) {
        printf("A : Ajouter une fiche adhérent\n");
        printf("Q : Quitter\n");
    } else {
        printf("A : Ajouter une fiche adhérent\n");
        printf("S : Supprimer une fiche\n");
        printf("M : Modifier une fiche\n");
        printf("V : Voir le contenu d'une fiche\n");
        printf("L : Voir le contenu de l'ensemble des fiches\n");
        printf("E : Supprimer toutes les fiches\n");
        printf("Q : Quitter\n");
    }
}

void afficheDate(typeDate date) {
    printf("%u/%u/%u\n", date.jour, date.mois, date.annee);
}

void afficherActivite(sports activ) {
    switch(activ) {
        case NATATION : printf("Il pratique la natation\n");
        break;
        case BASKETBALL : printf("Il pratique le basketball\n");
        break;
        case HANDBALL : printf("Il pratique le handball\n");
        break;
        case SQUASH : printf("Il pratique le squash\n");
        break;
        case TENNIS : printf("Il pratique le tenis\n");
        break;
    }
}

void afficherUnAdherent(typeAdherent *ad) {
    int i;
    printf("NOM : %s\n", ad->nom);
    printf("PRENOM : %s\n", ad->prenom);
    afficheDate(ad->dateDeNaissance);
    printf("NB D ACTIVIES : %d\n", ad->nbActivites);
    for(i=0; i<ad->nbActivites; i++) {
        afficherActivite(ad->activites[i]);
    }
    printf("NUM DE CARTE : %d", ad->numCarte);
    
}

