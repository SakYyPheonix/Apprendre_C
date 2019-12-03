
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int multipleDe;
    int resultat;
    
    scanf("%d", &multipleDe);
    for(i=0; i<=10; i++)
    {
       resultat = i*multipleDe;
       printf("%d x %d = %d\n", i, multipleDe, resultat);       
    }
    
    return 0;
}

