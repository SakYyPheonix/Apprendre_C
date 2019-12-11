#include "biblio.h"

char *saisirChaine(char messageEntree[NBMAXCARA])
{
    char *chaineSaisi;
    char tempon[NBMAXCARA];
    
    printf("%s", messageEntree);
    gets(tempon);
    chaineSaisi = (char *) malloc((strlen(tempon)+1)*sizeof(char));
    strcpy(chaineSaisi, tempon);
    return chaineSaisi;
    
}
