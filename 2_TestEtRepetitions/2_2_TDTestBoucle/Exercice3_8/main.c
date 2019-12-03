
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int multipleDe;
    int resultat;
    int debut;
    int fin;
    
    printf("Quel valeur multiplier : ");
    scanf("%d", &multipleDe);
    printf("Choisir un début et une fin : ");
    scanf("%d %d", &debut, &fin);
    for(i=debut; i<=fin; i++)
    {
       resultat = i*multipleDe;
       printf("%d x %d = %d\n", i, multipleDe, resultat);       
    }
    
    return 0;
}

