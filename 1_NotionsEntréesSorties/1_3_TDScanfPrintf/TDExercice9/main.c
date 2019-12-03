
#include <stdio.h>
#include <stdlib.h>

int main() {
    int val1;
    int val2;
    
    printf("donner deux valeur");
    scanf("%d %d", &val1, &val2);
    if(val1<val2)
    {
        printf("%d", val2);
    }
    
    if(val1>val2)
    {
        printf("%d", val1);
    }
}

