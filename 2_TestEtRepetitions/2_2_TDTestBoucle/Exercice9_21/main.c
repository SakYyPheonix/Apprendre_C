
#include <stdio.h>
#include <stdlib.h>

int main() {
    double var;
    int i;
    var = 1;

    for (i = 0; i < 64; i++) 
    {
        var = var*2;
    }
    printf("%f", var);
    return 0;
}

