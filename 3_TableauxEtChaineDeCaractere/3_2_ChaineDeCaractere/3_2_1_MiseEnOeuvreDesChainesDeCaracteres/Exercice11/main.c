#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30

int main() {
    char phrase[TAILLEMAX];
    printf("Donnez une phrase : ");
    gets(phrase);
    if(strncmp(phrase,"salut",5)==0)
    {
        printf("bon debut");
    }

    return (0);
}

