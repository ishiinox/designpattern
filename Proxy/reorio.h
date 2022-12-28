#pragma once
#include <iostream>
#include "hunter.h"

using namespace std;

class reorio : public Ihunter{
    public:
        reorio(){}
        ~reorio(){}
        string getHunterName();
        void setHuntTarget(int target);
        void hunt();
};