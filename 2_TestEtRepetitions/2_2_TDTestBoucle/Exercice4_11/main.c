
#include <stdio.h>
#include <stdlib.h>

int main() {

    int nbOrdi;
    int nbJoueur;
    nbOrdi = 59;
    do
    {
       printf("Proposer un nombre : ");
       scanf("%d", &nbJoueur);
        if (nbJoueur < nbOrdi) {
            printf("C'est plus\n");
        } else {
            if (nbJoueur > nbOrdi) {
                printf("C'est moins\n");
            } else {
                printf("C'est gagné\n");
            }
        }
    }while(nbOrdi != nbJoueur);
    return 0;
}

