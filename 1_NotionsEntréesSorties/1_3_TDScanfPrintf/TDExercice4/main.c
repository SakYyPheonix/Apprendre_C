
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
    
    printf("v1 = ");
    scanf("%d", &v1);
    printf("v2 = ");
    scanf("%hd", &v2);
    printf("v3 = ");
    scanf("%ld", &v3);
    
    printf("v4 = ");
    scanf("%d", &v4);
    printf("v5 = ");
    scanf("%hd", &v5);
    printf("v6 = ");
    scanf("%ld", &v6);
    
    printf("r1 = ");
    scanf("%f", &r1);
    printf("r2 = ");
    scanf("%f", &r2);
    
    printf("c1 = ");
    scanf("%c", &c1);
    printf("c2 = ");
    scanf("%c", &c2);
    
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
