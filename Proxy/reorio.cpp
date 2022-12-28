#include <iostream>
#include <string>
#include "reorio.h"

using namespace std;

/* Concrete */
string reorio::getHunterName(){
    string ret;
    std::cout << "\r\n";
    ret = "test";
    return ret;
};

void reorio::setHuntTarget(int target){
    
};

void reorio::hunt(){
    std::cout << "reorio:hunt\r\n";
};