/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cbourgouin
 *
 * Created on 6 octobre 2020, 10:54
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/syscall.h>

typedef struct {
    int v1;
    int v2;
    int v3;
} laStruct;

laStruct zoneCommune;

pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;

void *threadT1(void *arg) {
    laStruct val = *(laStruct *) arg;
    printf("pid dans le thread T1 : %d\n", getpid());
    printf("tid dans le thread T1 : %d\n", syscall(SYS_gettid));
    pthread_mutex_lock(&mut);
    zoneCommune.v1 = val.v1;
    zoneCommune.v2 = val.v2;
    zoneCommune.v3 = val.v3;
    pthread_mutex_unlock(&mut);
    pthread_exit((void *) "");
}

void *threadT2(void *arg) {
    pthread_mutex_lock(&mut);
    laStruct val = *(laStruct *) arg;
    printf("pid dans le thread T2 : %d\n", getpid());
    printf("tid dans le thread T2 : %d\n", syscall(SYS_gettid));
    pthread_mutex_lock(&mut);
    zoneCommune.v1 = val.v1;
    zoneCommune.v2 = val.v2;
    zoneCommune.v3 = val.v3;
    pthread_mutex_unlock(&mut);
    pthread_exit((void *) "");
}

void *threadT3(void *arg) {
    pthread_mutex_lock(&mut);
    laStruct val = *(laStruct *) arg;
    printf("pid dans le thread T3 : %d\n", getpid());
    printf("tid dans le thread T3 : %d\n", syscall(SYS_gettid));
    pthread_mutex_lock(&mut);
    zoneCommune.v1 = val.v1;
    zoneCommune.v2 = val.v2;
    zoneCommune.v3 = val.v3;
    pthread_mutex_unlock(&mut);
    pthread_exit((void *) "");
}

int main(int argc, char** argv) {
    int res;
    pthread_t t1, t2, t3;
    laStruct str1, str2, str3, val;
    res = pthread_mutex_init(&mut, NULL);
    if (res != 0)
    {
        perror("Pb Mutex initialization");
        exit(EXIT_FAILURE);
    }
    
    pthread_mutex_lock(&mut);
    zoneCommune.v1 = 0;
    zoneCommune.v2 = 0;
    zoneCommune.v3 = 0;
    printf("Zone Commune : v1=%d, v2=%d, v3=%d")
    pthread_mutex_unlock(&mut);
    
    void *thread_result;

    //creation
    res = pthread_create(&t1, NULL, threadT1, (void *) &val);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    res = pthread_create(&t2, NULL, threadT2, (void *) &val);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    res = pthread_create(&t3, NULL, threadT3, (void *) &val);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }
    printf("attente de la fin du thread...\n");

    //utilisation
    val.v1 = 10;
    val.v2 = 20;
    val.v3 = 30;
    res = pthread_join(t1, &thread_result);
    if (res != 0) {
        perror("Thread join a foir... echoué");
        exit(EXIT_FAILURE);
    }
    
    pthread_mutex_lock(&mut);
    printf("valeur : %d, %d, %d\n", zoneCommune.v1, zoneCommune.v2, zoneCommune.v3);
    pthread_mutex_unlock(&mut);
    
    val.v1 = 40;
    val.v2 = 50;
    val.v3 = 60;
    res = pthread_join(t2, &thread_result);
    if (res != 0) {
        perror("Thread join a foir... echoué");
        exit(EXIT_FAILURE);
    }
    
    pthread_mutex_lock(&mut);
    printf("valeur : %d, %d, %d\n", zoneCommune.v1, zoneCommune.v2, zoneCommune.v3);
    pthread_mutex_lock(&mut);
    
    val.v1 = 70;
    val.v2 = 80;
    val.v3 = 90;
    res = pthread_join(t3, &thread_result);
    if (res != 0) {
        perror("Thread join a foir... echoué");
        exit(EXIT_FAILURE);
    }
    printf("valeur : %d, %d, %d\n", zoneCommune.v1, zoneCommune.v2, zoneCommune.v3);

    exit(EXIT_SUCCESS);
    return (EXIT_SUCCESS);
}


