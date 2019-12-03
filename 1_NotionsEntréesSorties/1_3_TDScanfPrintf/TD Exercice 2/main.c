
#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1;
    short int v2;
    long int v3;
    
    unsigned int v4;
    unsigned short int v5;
    unsigned long int v6;
    
    float r1;
    double r2;
    
    char c1;
    unsigned char c2;
    
    v1 = -4;
    v2 = -4;
    v3 = -4;
    
    v4 = -4;
    v5 = -4;
    v6 = -4;
    
    r1 = 3.14;
    r2 = 3.14;
    
    c1 = "z";
    c2 = "z";
    
    printf("v1 = %d \n",v1);
    printf("v2 = %hd \n",v2);
    printf("v3 = %ld \n",v3);
    
    printf("v4 = %d \n",v4);
    printf("v5 = %hd \n",v5);
    printf("v6 = %ld\n",v6);
    
    printf("r1 = %f \n",r1);
    printf("r2 = %f \n",r2);
    
    printf("c1 = %c \n",c1);
    printf("c2 = %c \n",c2);
    
    
    return 0;
}

