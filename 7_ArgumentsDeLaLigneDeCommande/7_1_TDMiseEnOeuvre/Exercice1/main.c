
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 12 décembre 2019, 11:15
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int i;
    
    for(i=0; i<argc; i++) {
        printf("argument n%d : %s\n", i, argv[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

