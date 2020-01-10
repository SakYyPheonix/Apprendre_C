
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *fd;
    int valErr;
    fd = fopen("/home/USERS/ELEVES/SNIR2019/cbourgouin/Documents/essais.txt", "w+");
    if(fd==NULL){
        printf(" %s\n", strerror(errno));
        exit(errno);
    }
    valErr = fputs("Bonjour", fd);
    if(valErr==EOF){
        printf(" %s\n", strerror(errno));
        exit(errno);
    }
    valErr = fclose(fd);
    if(valErr==EOF){
        printf(" %s\n", strerror(errno));
        exit(errno);
    }
    
    return (0);
}

