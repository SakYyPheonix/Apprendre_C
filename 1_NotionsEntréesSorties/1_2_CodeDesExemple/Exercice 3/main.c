
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jourDonne;
    int heureDonne;
    int minuteDonne;
    int minuteTotal;
    
    printf("nb de jour");
    scanf("%d", &jourDonne);
    printf("nb de heure");
    scanf("%d", &heureDonne);
    printf("nb de minute");
    scanf("%d", &minuteDonne);
    minuteTotal = (jourDonne * 24 + heureDonne) * 60;
    printf("dans cette durée il y a %d minutes", minuteTotal);
}

