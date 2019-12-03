
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 novembre 2019, 10:15
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30

int main() {
    char phrase[TAILLEMAX];
    printf("Donnez une phrase : ");
    gets(phrase);
    printf("%s", phrase);

    return (0);
}

