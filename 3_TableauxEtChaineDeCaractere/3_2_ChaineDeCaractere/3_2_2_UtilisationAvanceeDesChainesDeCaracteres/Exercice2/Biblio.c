char traitement(char *chaine)
{
    int longueur;
    int i;
    longueur = strlen(chaine);
    for(i=0; i<longueur; i++)
    {
        if(chaine[i]>='a' && chaine[i]<='z')
        {
            chaine[i] = chaine[i] + 32;
        }
        else
        {
            
        }
    }
}

