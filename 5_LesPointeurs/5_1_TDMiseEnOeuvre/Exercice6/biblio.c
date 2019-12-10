
#include "biblio.h"

char *supprimerE(char *chaineInit)
{
    int i;
    int compteurE;
    int compteur;
    char *newChaine;
    newChaine = (char *) malloc(NBCARAMAX * sizeof(char));
    
    compteurE = 0;
    compteur = 0;
    for(i=0; i<strlen(chaineInit); i++)
    {
        if(chaineInit[i] != 'e')
        {
            newChaine[i-compteurE] = chaineInit[i];
            compteur++;
        }
        else
        {
            compteurE++;
        }
        
    }
    newChaine[compteur+1] = '\0';
    return newChaine;
}

