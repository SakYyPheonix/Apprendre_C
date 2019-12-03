
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int resultat;
    resultat = 0;
    for(i=1; i<=5;i++)
    {
        resultat = resultat + ((i*i)+3*i-5);
    }
    printf("Resultat = %d", resultat);

    return (0);
}

