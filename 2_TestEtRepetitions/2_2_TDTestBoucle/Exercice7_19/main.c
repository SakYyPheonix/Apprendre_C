
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int dec;
    unsigned int varSoustraction;
    
    printf("donner une valeur inferieur a 4294967296 : ");
    scanf("%d", &dec);
    varSoustraction = 2147483648;
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
