//
// Created by Amanuel on 10/13/2018.
//
#include <iostream>
#include <string>
#include <vector>
//#include "linearSearch.h"
using namespace std;

int linearSearch(string value, vector<string> A, int size, int *assignments, int *comparisons){

int count = 0; assignments++;
    for(int i = 0; i < size; ++i) {
        if (A.at(i) == value) {
            count++;
            comparisons ++;
        }
       assignments++;
       comparisons++;
    }

return count;

}
