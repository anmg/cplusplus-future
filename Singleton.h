//
// Created by mingguo on 2020/5/19.
//

#ifndef UNTITLED_SINGLETON_H
#define UNTITLED_SINGLETON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

class Singleton {
private:
    Singleton();
    static Singleton* instance;
public:
    ~Singleton();
    static Singleton* getInstance();
};

#endif //UNTITLED_SINGLETON_H
