
#include <stdio.h>
#include <stdlib.h>

int main() {

    char lettre;
    
    printf("donner la Lettre : ");
    scanf("%c", &lettre);
    switch(lettre)
    {
        case 'A':   printf(" Entre 20 et 16 points");
                    break;
        case 'B':   printf(" Entre 16 et 12 points");
                    break;
        case 'C':   printf(" Entre 12 et 8 points");
                    break;
        case 'D':   printf(" Entre 8 et 4 points");
                    break;
        case 'E':   printf(" Entre 4 et 0 points");
                    break;
        default : printf("ERROR");
    }
    return 0;
}

