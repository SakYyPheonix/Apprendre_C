

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define NBCARAMAX 5000

int main() {
    FILE *ficTex;
    char car;
    size_t retour;
    unsigned int compteur = 0;
    
    ficTex = fopen("/home/USERS/ELEVES/SNIR2019/fichierTexte.txt", "r");
    if(ficTex==NULL){
        printf(" %s\n", strerror(errno));
        exit(errno);
    }
    
    while(!feof(ficTex)){
        retour = fread(&car, sizeof (car), 1, ficTex);;
        if(retour == 1) {
            printf("%c", car);
            if(car<='z' && car>='a'){
                compteur++;
            }
        } else {
            if(!feof(ficTex)){
                printf("%s\n", strerror(errno));
                exit(errno);
            }
        }
    }
    
    
    
/*
    while(!feof(ficTex)){
        car = fgetc(ficTex);
        if(car != EOF) {
            printf("%c", car);
            if(car<='z' && car>='a'){
                compteur++;
            }
        } else {
            if(!feof(ficTex)){
                printf("%s\n", strerror(errno));
                exit(errno);
            }
        }
    }
*/
    
/*
    while(!feof(ficTex)){
        retour = (unsigned char)fgetc(ficTex);
        if(ficTex==EOF){
            printf(" %s\n", strerror(errno));
            exit(errno);
        }
        car = (unsigned char)retour;
        if(car<='z' && car>='a'){
            compteur++;
        }
        printf("%c", car);
    }
*/
    printf("%d", compteur);
    retour = fclose(ficTex);
    if(retour==EOF){
            printf(" %s\n", strerror(errno));
            exit(errno);
        }
    
    return (0);
}

