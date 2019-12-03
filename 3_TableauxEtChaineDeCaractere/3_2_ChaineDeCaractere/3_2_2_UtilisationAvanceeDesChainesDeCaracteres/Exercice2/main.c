
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 19 novembre 2019, 16:44
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 255

int main() {
    int choixMenu;
    char cryptage[TAILLEMAX];
    char cryptageTraiter[TAILLEMAX];
    printf("cryptage by Bibi ;P\n 1.Encryptage\n 2.Decryptage");
    scanf("%d", &choixMenu);
    
    printf("***Donner la phrase a traduire***\n");
    gets(cryptage);
    cryptageTraiter = traitement(cryptage);
    
    if(choixMenu == 1)
    {
        
    }
            
    return (0);
}

