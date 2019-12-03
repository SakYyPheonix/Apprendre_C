#include <stdio.h>
#include <stdlib.h>

int main() {

    int multipleDe;
    int resultat;
    int debutDeroulement;
    int fin;

    printf("Quel valeur multiplier : ");
    scanf("%d", &multipleDe);
    printf("Choisir un début et une fin : ");
    scanf("%d %d", &debutDeroulement, &fin);

    while (debutDeroulement <= fin) {
        resultat = debutDeroulement*multipleDe;
        printf("%d x %d = %d\n", debutDeroulement, multipleDe, resultat);
        debutDeroulement++;
    }

    return 0;
}

