#include <stdio.h>
#include <stdlib.h>

int main() {

    int nbOrdi;
    int nbJoueur;
    nbOrdi = 571;
    int compteur;
    compteur = 0;
    do
    {
       printf("Proposer un nombre : ");
       scanf("%d", &nbJoueur);
       compteur++;
        if (nbJoueur < nbOrdi) {
            printf("C'est plus\n");
        } else {
            if (nbJoueur > nbOrdi) {
                printf("C'est moins\n");
            } else {
                printf("C'est gagné\n vous avez essayer : %d", compteur);   
            }
        }
    }while(nbOrdi != nbJoueur);
    return 0;
}
