
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 28 novembre 2019, 11:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main(int argc, char** argv) {
    short int v1, v2;
    v1 = 10;
    v2 = 20;
    printf("%hd %hd\n",v1, v2);
    echange(&v1, &v2);
    printf("%hd %hd\n",v1, v2);
    
    return (EXIT_SUCCESS);
}

