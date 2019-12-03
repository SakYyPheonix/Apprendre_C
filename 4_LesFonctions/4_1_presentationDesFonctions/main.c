
#include <stdio.h>
#include <stdlib.h>
#include "MyBiblio.h"


int main(int argc, char** argv) {
    int res;
    int nb1;
    int nb2;
    scanf("%d %d", &nb1, &nb2);
    
    res = calcule(nb1, nb2);
    
    printf("%d + %d = %d", nb1, nb2, res);        
    return (EXIT_SUCCESS);
}

