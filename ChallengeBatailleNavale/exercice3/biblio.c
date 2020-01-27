#include "biblio.h"

int torpillerBateau(typeBateau *bateau, int x, int y) {
    int i;
    int etatBateau = 0;
    if (bateau->sens == 'H' && y == bateau->y && (x >= bateau->x && x < bateau->x + bateau->taille)) {
        bateau->cases[x - bateau->x] = 1;
        printf(" %s touché\n", bateau->nom);
    } else {
        if (bateau->sens == 'V' && x == bateau->x && (y >= bateau->y && y < bateau->y + bateau->taille)) {
            bateau->cases[y - bateau->y] = 1;
            printf(" %s touché\n", bateau->nom);
        } 
    }
    
    for (i = 0; i < bateau->taille; i++) {
        if (bateau->cases[i] == 1) {
            etatBateau++;
        }
    }
 
    return etatBateau;
}




