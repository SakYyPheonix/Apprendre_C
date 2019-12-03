
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 7 novembre 2019, 11:02
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 30
#define PASSWORD "7efgmdnih"
#define USERNAME "cbourgouin"

int main() {
    char userName[TAILLEMAX];
    char passWord[TAILLEMAX];
    
    char phrase[TAILLEMAX];
    printf("Username : ");
    gets(userName);
    printf("Password : ");
    gets(passWord);
    
    if(strcmp(userName, USERNAME)==0 && strcmp(passWord, PASSWORD)==0)
    {
        printf("Acces Autorisé");
    }
    else
    {
        printf("Acces Refusé");
    }

    return (0);
}

