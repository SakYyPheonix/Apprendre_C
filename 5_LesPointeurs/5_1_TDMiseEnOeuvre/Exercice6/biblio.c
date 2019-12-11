
#include "biblio.h"

char *supprimerE(char *chaineInit)
{
    int i;
    int compteur;
    char tempon[NBCARAMAX];
    char *newChaine;
    
    compteur = 0;
    for(i=0; i<strlen(chaineInit); i++)
    {
        if(chaineInit[i] != 'e')
        {
            tempon[compteur] = chaineInit[i];
            compteur++;
        }  
    }
    tempon[compteur] = '\0';
    newChaine = (char *) malloc((strlen(tempon)+1) * sizeof(char));
    strcpy(newChaine, tempon);
    return newChaine;
}

