
#include <stdio.h>
#include <stdlib.h>

int main() {
    int dec;
    int varSoustraction;
    
    printf("donner une valeur inferieur a 256 : ");
    scanf("%d", &dec);
    varSoustraction = 128;
    do
    {
        if(dec >= varSoustraction)
        {
            printf("1");
            dec = dec - varSoustraction;
        }
        else
        {
            printf("0");
        }
        varSoustraction = varSoustraction/2;
    }while(varSoustraction >= 1);
    
    return 0;
}

