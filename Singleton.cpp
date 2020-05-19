//
// Created by mingguo on 2020/5/19.
//

#include "Singleton.h"
pthread_mutex_t my_lock;

Singleton * Singleton::instance = NULL;

Singleton::Singleton() {
}

Singleton::~Singleton() {
}

Singleton * Singleton::getInstance() {
    if (instance == NULL){
        pthread_mutex_init(&my_lock, NULL);
        pthread_mutex_lock(&my_lock);
        if (instance == NULL){
            instance = new Singleton;
            printf("obj created.\n");
        }
        pthread_mutex_unlock(&my_lock);
        pthread_mutex_destroy(&my_lock);
    }
    return instance;
}