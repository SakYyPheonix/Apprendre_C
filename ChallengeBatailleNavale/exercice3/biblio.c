#include "biblio.h"

int torpillerBateau(typeBateau *bateau, int x, int y) {
    int i;
    int compteur = 0;
    int etatBateau;
    if (bateau->sens == 'H' && y == bateau->y && (x >= bateau->x && x < bateau->x + bateau->taille)) {
        bateau->cases[x - bateau->x] = 1;
        printf("touché\n");
    } else {
        if (bateau->sens == 'V' && x == bateau->x && (y >= bateau->y && y < bateau->y + bateau->taille)) {
            bateau->cases[y - bateau->y] = 1;
            printf("touché\n");
        } else {
            printf("Manqué\n");
        }
    }
    for (i = 0; i < bateau->taille; i++) {
        if (bateau->cases[i] == 1) {
            compteur++;
        }
    }
    if(compteur == bateau->taille){
        printf("%s coulée !!",bateau->nom);
        etatBateau = 1;
    }
 
    return etatBateau;
}


