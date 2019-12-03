
#include <stdio.h>
#include <stdlib.h>

int main() {
    int note;

    do {
        printf("saisir une note : ");
        scanf("%d", &note);
    } while (note >= 0);
    return 0;
}

