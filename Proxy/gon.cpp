#include <iostream>
#include <string>
#include "gon.h"

/* Concrete */
string gon::getHunterName(){
    string ret;
    std::cout << "\r\n";
    ret = "test";
    return ret;
};

void gon::setHuntTarget(int target){
    
};

void gon::hunt(){
    std::cout << "GONsann:hunt\r\n";
};