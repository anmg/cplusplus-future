
/*
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "./Singleton/Singleton.h"

using namespace std;

static void* fun1(void*){
    Singleton::getInstance();
    printf("%d\n", 1);
    sleep(1);
    return NULL;
}

static void* fun2(void*){
    Singleton::getInstance();
    printf("%d\n", 2);
    sleep(1);
    return NULL;
}

static void* fun3(void*){
    Singleton::getInstance();
    printf("%d\n", 3);
    sleep(1);
    return NULL;
}
int main() {
    pthread_t pid1, pid2, pid3;
    pthread_create(&pid1, NULL, fun1, NULL);
    pthread_create(&pid2, NULL, fun2, NULL);
    pthread_create(&pid2, NULL, fun3, NULL);

    pthread_join(pid1, NULL);
    pthread_join(pid2, NULL);
    pthread_join(pid3, NULL);

    return 0;
}
*/