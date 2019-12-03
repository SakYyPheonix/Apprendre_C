
#include <stdio.h>
#include <stdlib.h>

int main() {
    float nbHeure;
    float nbQuart;
    float Cout;

    printf("donner nb d'heure");
    scanf("%f", &nbHeure);
    nbQuart = nbHeure * 4;
    if (nbQuart <= 4) {
        printf("gratuit");
    } else {
        if (nbQuart >= 5 && nbQuart <= 10) {
            Cout = (nbQuart - 4)*0.5;
            printf("le prix est de %f", Cout);
        } else {
            if (nbQuart >= 11 && nbQuart <= 12) {
                Cout = 2.5 + ((nbQuart - 10)*0.4);
                printf("le prix est de %f", Cout);
            } else {
                if (nbQuart >= 13 && nbQuart <= 28) {
                    Cout = 3.3 + ((nbQuart - 12)*0.2);
                    printf("le prix est de %f", Cout);
                } else {
                    if (nbQuart >= 29) {
                        Cout = 6.5 + ((nbQuart - 28)*0.1);
                        printf("le prix est de %f", Cout);
                    }
                }
            }
        }
    }

    return 0;
}

