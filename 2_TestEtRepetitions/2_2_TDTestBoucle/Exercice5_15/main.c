
#include <stdio.h>
#include <stdlib.h>

int main() {
    int note;
    int somme;
    int compteur;

    compteur = 0;
    somme = 0;
    do {
        printf("saisir une note : ");
        scanf("%d", &note);
        if (note >= 0) {
            somme = somme + note;
            compteur++;
        }
    } while (note >= 0);
    printf("%d %d", compteur, somme);

    return 0;
}

