
#include <stdio.h>
#include <stdlib.h>

int main() {
    int min;
    int max;
    int compteur;
    int compteurLacunes;
    int sommeMin;
    int sommeMax;
    int pourcentageLacunes;
    float moyenneMin;
    float moyenneMax;

    compteur=0;
    compteurLacunes=0;
    sommeMin=0;
    sommeMax=0;
    do
    {
        printf("Donner valeur min : ");
        scanf("%d", &min);
        printf("Donner valeur max : ");
        scanf("%d", &max);
        compteur++;
        sommeMin = sommeMin + min;
        sommeMax = sommeMax + max; 
        if(min==0||max==0)
        {
            compteurLacunes++;
        }
    }while(min!=0 || max!=0);
    compteurLacunes = compteurLacunes-1;
    compteur = compteur-1;
    moyenneMin = (sommeMin/compteur);
    moyenneMax = (sommeMax/compteur);
    pourcentageLacunes=((compteurLacunes*100)/(compteur*2));
    
    printf("La moyenne minima est de %f\n", moyenneMin);
    printf("La moyenne maxima est de %f\n", moyenneMax);
    printf("il y a %d (%d%) lacunes",compteurLacunes, pourcentageLacunes);
    
    
    return(0);
}

