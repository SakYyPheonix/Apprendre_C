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

typeAdherent *creerUnAdherent() {
    typeAdherent *ad;
    ad = (typeAdherent *) malloc(sizeof(typeAdherent));
    int compteur = 0;
    int numActive;
    int i;
    
    printf("Nom : ");
    scanf("%s", ad->nom);
    printf("Prenom : ");
    scanf("%s", ad->prenom);
    printf("date de Naissance (JJ MM AAAA) : ");
    scanf("%d %d %d", &ad->dateDeNaissance.jour, &ad->dateDeNaissance.mois, &ad->dateDeNaissance.annee);
    
    for(i=0; i<5; i++) {
        ad->activites[i] = -1;
    }
    do {
        printf(" 1) Natation\n 2) Basketball\n 3) Handball\n 4) Squash\n 5) Tennis\n 0) Quitter\nActiviter : ");
        do {
            scanf("%d", &numActive);
        }while(numActive < 0 || numActive > 5);
        switch(numActive) {
            case 1 : ad->activites[compteur] = NATATION;
            break;
            case 2 : ad->activites[compteur] = BASKETBALL;
            break;
            case 3 : ad->activites[compteur] = HANDBALL;
            break;
            case 4 : ad->activites[compteur] = SQUASH;
            break;
            case 5 : ad->activites[compteur] = TENNIS;
            break;
        }
        compteur++;
    }while(ad->activites[compteur-1]>=0 && compteur-1 < 4 && numActive != 0);
    
    ad->nbActivites = 0;
    for(i=0; i<5; i++) {
        if(ad->activites[i] == NATATION|| ad->activites[i] == BASKETBALL || ad->activites[i] == HANDBALL || ad->activites[i] == SQUASH || ad->activites[i] == TENNIS) {
            ad->nbActivites++;
        }
    }
    printf("Numero de Carte : ");
    scanf("%d", &ad->numCarte);
    
    return ad;
}