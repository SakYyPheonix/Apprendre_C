
#include <stdio.h>
#include <stdlib.h>

int main() {
    float masse;
    float taille;
    float imc;
    
    printf("donner votre taille : ");
    scanf("%f", &taille);
    printf("donner votre poids : ");
    scanf("%f", &masse);
    imc = masse/(taille*taille);
    printf("votre imc est de : %f", imc );
}

