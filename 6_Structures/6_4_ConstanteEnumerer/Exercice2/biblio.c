#include "biblio.h"

boolean estUnPalindrome(char *chaine)
{
    int i;
    int longueur;
    boolean idem=TRUE;
    longueur=strlen(chaine);
    for (i=0;i<longueur/2;i++)
    {
        if (chaine[i]!=chaine[(longueur-1)-i])
        {
            idem=FALSE;
        }
    }
    return idem;
}

