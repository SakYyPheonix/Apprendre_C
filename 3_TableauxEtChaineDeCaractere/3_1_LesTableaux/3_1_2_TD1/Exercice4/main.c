
/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 5 novembre 2019, 15:40
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tablIn[10];
    int tablFin[10];
    int i;
    
    for(i=0; i<10; i++)
    {
        tablIn[i]=i+1;
        printf("tableau Initial %d : %d\n",i+1, tablIn[i]);
    }
      
    for(i=0; i<10; i++)
    {
        tablFin[i]=tablIn[9-i];
        printf("tableau Final %d : %d\n",i+1, tablFin[i]);
    }

    return (0);
}

