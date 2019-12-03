#include <stdio.h>
#include <stdlib.h>

int main() {
    float taille;
    float poids;
    float imc;
    
    printf("donner votre taille : ");
    scanf("%f", &taille);
    printf("donner votre poids : ");
    scanf("%f", &poids);
    imc = poids / (taille * taille);
    printf("votre imc est de %f ", imc);
}

