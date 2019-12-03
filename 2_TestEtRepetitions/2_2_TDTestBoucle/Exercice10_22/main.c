
#include <stdio.h>
#include <stdlib.h>

int main() {
    double epaisseurDeFeuille;
    int compteur;
    epaisseurDeFeuille = 0.076474;
    compteur = 0;
    
    do
    {
        epaisseurDeFeuille = epaisseurDeFeuille*2;
        compteur++;
    }while(epaisseurDeFeuille < 320755);
    printf("%d", compteur);

    return 0;
}

