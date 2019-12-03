
#include <stdio.h>
#include <stdlib.h>

int main() {
    int note;
    int compteur;
    compteur = 0;
    do {
        printf("saisir une note : ");
        scanf("%d", &note);
        compteur++;
    } while (note >= 0);
    compteur--;
    printf("%d", compteur);
    return 0;
}

