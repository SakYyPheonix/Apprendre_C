#include "gestionPendu.h"

int afficherMenu()
{
    char choix;
    int retour;
    do
    {
        printf("Voulez vous jouer au pendu (y / n) : ");
        scanf(" %c", &choix);
    }while(choix !='y' && choix != 'n');
    switch(choix)
    {
        case 'y' : retour = 1;
        break;
        case 'n' : retour = -1;
        break;
    }
    return retour;
}

void afficherPendu(int nroErreur)
{
    switch(nroErreur)
    {
        case 1 : 
            printf("        \n");
            printf("        \n");
            printf("        \n");
            printf("        \n");
            printf("        \n");
            printf("/|      \n");
            break;
            
        case 2 : 
            printf("        \n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            printf("/|      \n");
            break;
            
        case 3 : 
            printf(" _____  \n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            printf("/|      \n");
            break;
            
        case 4 : 
            printf(" _____  \n");
            printf(" |   |  \n");
            printf(" |      \n");
            printf(" |      \n");
            printf(" |      \n");
            printf("/|      \n");
            break;
            
        case 5 : 
            printf(" _____  \n");
            printf(" |   |  \n");
            printf(" |   O  \n");
            printf(" |      \n");
            printf(" |      \n");
            printf("/|      \n");
            break;
            
        case 6 : 
            printf(" _____  \n");
            printf(" |   |  \n");
            printf(" |   O  \n");
            printf(" |  /|\\ \n");
            printf(" |      \n");
            printf("/|      \n");
            break;
            
        case 7 : 
            printf(" _____  \n");
            printf(" |   |  \n");
            printf(" |   O  \n");
            printf(" |  /|\\ \n");
            printf(" |  / \\ \n");
            printf("/|      \n");
            break;
    }

}
void afficherLettre(char *histo, int nbLettre)
{
	int i;
	printf("\nLettres deja proposees : ");
	for(i=0; i<nbLettre; i++)
        {
            printf(" %c", histo[i]);
        }
	printf("\n");
}

int motEstTrouve(char *motATtrouver, char *motPropose){
	return(strcmp(motATtrouver,motPropose));
}

int placerLettre(char *motATrouver,char *motCourant,char lettrePropose){
	int flag=1;
	int i;
	for(i=0;i<strlen(motATrouver);i++){
            if(motATrouver[i]==lettrePropose)
            {
                motCourant[i] = lettrePropose;
                flag = 0;
            }
	}
	return flag;
}

int verifierLettrePropose(char *lettresProposees, int nbLettreProposee, char lettre)
{
	int flag=1;
	int i;
	for(i = 0; i<nbLettreProposee;i++){
		if ((lettre == lettresProposees[i]) || (lettre<'a' || lettre>'z') ){
			flag=0;
		}
	}
	return flag;

}




void msleep(unsigned int maxTime)
{
   
    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000)
    {
        do
        {
            secondes++;
            maxTime -= 1000;
        }
        while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

unsigned int aleatoire(unsigned int maxAlea)
{
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);


}
void initialiserMot(char *motCourant,int longueurMot){
	int i;
	for(i=0; i<longueurMot; i++)
        {
            motCourant[i] = '-';
        }
        // ajout du \0 apres les - pour que le tableau soit une chaine de caractere
	motCourant[longueurMot]='\0';
}

