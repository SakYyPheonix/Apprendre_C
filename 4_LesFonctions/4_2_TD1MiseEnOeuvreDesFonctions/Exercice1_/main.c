
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 novembre 2019, 13:59
 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char genre;
    
    printf("vous êtes un homme ou une femme (h/f)? ");
    scanf("%c", &genre);
    
    if(genre == 'f')
    {
        printf("menu pour femme\n");
    }
    if(genre == 'h')
    {
        printf("menu pour homme\n");
    }
    
    printf("menu pour homme\n");

    return (0);
}

