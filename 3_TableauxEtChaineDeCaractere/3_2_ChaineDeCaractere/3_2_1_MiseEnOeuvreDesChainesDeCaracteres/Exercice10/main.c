
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 7 novembre 2019, 10:44
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30

int main() {
    char phrase[TAILLEMAX];
    printf("Donnez une phrase : ");
    gets(phrase);
    if(strcmp(phrase,"bonjour")==0)
    {
        printf("ok");
    }

    return (0);
}


