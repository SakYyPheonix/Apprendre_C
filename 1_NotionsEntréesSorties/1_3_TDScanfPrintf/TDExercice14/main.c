
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int choix;
    int val1;
    int val2;
    int resultat;
    float resDiv;
    
    printf(" 1) faire la somme des valeurs\n 2) faire la soustraction\n 3) faire la différence\n 4) faire le produit \n");
    scanf("%d", &choix);
    switch(choix)
    {
        case 1: printf("donner les deux valeurs \n");
                scanf("%d %d", &val1, &val2);
                resultat = val1 + val2;
                printf("%d + %d = %d",val1, val2, resultat);
                break;
                        
        case 2: printf("donner les deux valeurs \n");
                scanf("%d %d", &val1, &val2);
                resultat = val1 - val2;
                printf("%d - %d = %d",val1, val2, resultat);
                break;
                
        case 3: printf("donner les deux valeurs \n");
                scanf("%d %d", &val1, &val2);
                resDiv = val1 / val2;
                printf("%d / %d = %f",val1, val2, resDiv);
                break;
                
        case 4: printf("donner les deux valeurs \n");
                scanf("%d %d", &val1, &val2);
                resultat = val1 * val2;
                printf("%d * %d = %d",val1, val2, resultat);
                break; 
                
        default: printf("what ?");        
    }
    return 0;
}

