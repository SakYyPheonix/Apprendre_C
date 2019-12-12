/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 décembre 2019, 10:26
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

/*
 * 
 */
int main()
{
    char *nomJour[7]={"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi"," dimanche"};
    jours aujourdhui=SAMEDI ;
    printf("%s\n",nomJour[aujourdhui]) ;
    return 0;
}

