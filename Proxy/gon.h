#pragma once
#include <iostream>
#include <string>
#include "hunter.h"

using namespace std;

class gon : public Ihunter{
    public:
        gon(){
            std::cout << "----seiyaku_to_seiyaku----\r\n";
        }
        ~gon(){}
        string getHunterName();
        void setHuntTarget(int target);
        void hunt();
};