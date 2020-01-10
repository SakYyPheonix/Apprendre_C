
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *texte;
    
    texte = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Apprendre_C/8_AccesFichier/texteExemple.txt", "w+");
    if(texte == NULL){
        printf( "%s\n", strerror( errno ) );
        exit( errno );
    }

    return (0);
}

