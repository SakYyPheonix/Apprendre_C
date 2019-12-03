#define TAILLEMAX 255

char supprimeCaractere(char chaine[TAILLEMAX]) {
    int longueur;
    int i;
    char chaineEnd[TAILLEMAX];
    int compteur;
    longueur = strlen(chaine);

    for (i = 0; i < longueur + 1; i++) 
    {
        if ((chaine[i] >= 97 && chaine[i] <= 122) || chaine[i] == 0) 
        {
            chaineEnd[i - compteur] = chaine[i];
        } 
        else 
        {
            if (chaine[i] >= 65 && chaine[i] <= 90) 
            {
                chaineEnd[i - compteur] = (chaine[i] + 32);
            } 
            else 
            {
                compteur++;
            }
        }
    }
    return chaineEnd;
}

int detectePalindrome(char *chaine) {
    int longueur;
    int i;
    int compteur;
    char chaineEnd[TAILLEMAX];
    int retour;
    
    longueur = strlen(chaine);
    
    for(i=0; i<longueur; i++)
    {
        if(chaineEnd[i]==chaineEnd[longueur-i-1])
        {
            compteur++;
        }
    }
    
    if(longueur==compteur)
    {
        retour == 1;
    }
    return retour;
}

