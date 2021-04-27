//
// Created by mingguo on 2020/5/19.
//

#include "iostream"
#include <vector>
#include <unordered_map>
#include "math.h"
#include <any>
#include <iostream>

using std::vector;
using std::string;
using std::unordered_map;
using std::pair;
using std::any;
using namespace std;

void print_nums(int *nums, int size){
    for (int i = 0; i < size; i++){
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

int main() {
    int size = 5;
    int nums[9] = {9,8,7,6,5,4,3,2,1};

    return 0;
}

/*
std::cin >> a;
std::cout << size << std::endl;
std::cout << std::endl;
*/
