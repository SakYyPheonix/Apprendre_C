#define TAILLEMAX 255

void afficheFiche(char* identiteUtil1, char* identiteUtil2, int val, float reel1, float reel2)
{
    printf("fiche recapitulative :\n");
    printf("- Identite     : %s %s\n", identiteUtil2, identiteUtil1);
    printf("- Age          : %d ans\n", val);
    printf("- Poids        : %.2f Kg\n", reel2);
    printf("- Taille       : %.2f m\n", reel1);
}

void afficherCorpulence(float imc)
{
    char corpulence[7][TAILLEMAX] = {"famine", "maigreur", "normale", "surpoids", "obésité modérée", "obésité sévère", "obésité morbide"};
    float tabIMC[6] = {16.5, 18.5, 25, 30, 35, 40};
    int i;
    
    printf("votre indice de masse corporelle est de : %.2f\n", imc);
    if(imc<tabIMC[0])
    {
        printf("votre corpulence est qualifiee de %s\n", corpulence[0]);
    }
    else
    {
        if(imc>=tabIMC[5])
        {
            printf("votre corpulence est qualifiee de %s\n", corpulence[6]);
        }
        else
        {
            if (imc>=tabIMC[0] && imc<tabIMC[5])
            {
                for(i=1; i<5; i++)
                {
                    if(imc>=tabIMC[i-1] && imc<tabIMC[i])
                    {
                        printf("votre corpulence est qualifiee de %s\n", corpulence[i]);
                    }
                }
            }
        }
    }
}

void afficherMenu()
{
    printf("Calculer votre poids ideal : \na - formule de lorentz \nb - formule de devine \nc - formule de lorentz en tenant compte de l'age\nq - sortir \n"); 
}

float calculerPoidsLorentz(char lettre, float reel)
{
    float poidsIdeal;
    
    switch(lettre)
    {
        case 'h': poidsIdeal = reel*100-100-(reel*100-150)/4;
        break;
        case 'f': poidsIdeal = reel*100-100-(reel*100-150)/2.5;
        break;
    }
    return poidsIdeal;
}

float calculerPoidsDevine(char lettre, float reel)
{
    float poidsIdeal;
    
    switch(lettre)
    {
        case 'h': poidsIdeal = 50+2.3*(reel/0.0254-60);
        break;
        case 'f': poidsIdeal = 45.5+2.3*(reel/0.0254-60);
        break;
    }
    return poidsIdeal;
}

float calculerPoidsLorentzAge(float val, float reel)
{
    float poidsIdeal; 
    poidsIdeal = 50 + (reel * 100 - 150 ) / 4 + ( val - 20) / 4;
    return poidsIdeal;
}

