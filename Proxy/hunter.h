#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ihunter{
    public:
        virtual string getHunterName()=0;
        virtual void setHuntTarget(int target)=0;
        virtual void hunt()=0;
};