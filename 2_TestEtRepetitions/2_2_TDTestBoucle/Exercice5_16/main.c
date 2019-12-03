
#include <stdio.h>
#include <stdlib.h>

int main() {
    int note;
    int somme;
    int compteur;
    float moyenne;

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
    moyenne = somme / compteur;
    printf("%f/20\n", moyenne);

    return 0;
}

