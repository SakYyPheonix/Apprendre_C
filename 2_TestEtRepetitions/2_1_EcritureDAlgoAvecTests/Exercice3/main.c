
#include <stdio.h>
#include <stdlib.h>

int main() {
    float poids;
    float taille;
    float resultat;
    
    printf("donner le poids : ");
    scanf("%f", &poids);
    printf("donner la taille : ");
    scanf("%f", &taille);
    resultat = poids/(taille*taille);
    printf("le resultat et de : %f \n", resultat);
    
    if(resultat<=25 && resultat>=18)
    {
        printf("tu es dans la norme");
    }
    return 0;
}

