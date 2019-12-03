
int presenceEr(char *chaine)
{
    int longueur;
    int retour;
    longueur = strlen(chaine);
    
    if(chaine[longueur-2] == 'e' && chaine[longueur-1] == 'r' && strcmp(chaine, "aller") !=0)
    {
        retour = 1;
    }
    else
    {
        retour = 0;
    }
    return retour;
}

void afficheTerminaison(char *chaine)
{
    int i;
    int longueur;
    char sujet[6][10] = {"Je", "Tu", "Il/Elle", "Nous", "Vous", "Ils/Elles"};
    char terminaison[6][10] = {"e", "es", "e", "ons", "ez", "ent"};
    
    longueur = strlen(chaine);
    for(i=0; i<6; i++)
    {
        if(i==0 && (chaine[0] == 'a' || chaine[0] == 'e' || chaine[0] == 'i' || chaine[0] == 'o' || chaine[0] == 'u' || chaine[0] == 'y'))
        {
            printf("J'%s%s\n", chaine, terminaison[i]);
        }
        else
        {
            if(i == 3 && chaine[longueur - 1] == 'g')
            {
                printf("%s %se%s\n", sujet[i], chaine, terminaison[i]);
            }
            else
            {
                printf("%s %s%s\n",sujet[i], chaine, terminaison[i]);
            }
        }
    }
}

