#include "biblio.h"

char *saisirChaine(char messageEntree[NBMAXCARA])
{
    char *chaineSaisi;
    chaineSaisi = (char *) malloc(NBMAXCARA*sizeof(char));
    
    printf("%s", messageEntree);
    gets(chaineSaisi);
    return chaineSaisi;
    
}
