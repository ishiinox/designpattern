#pragma once
#include <iostream>
#include <string>
#include "hunter.h"
#include "gon.h"
#include "reorio.h"

using namespace std;

class hunterAssosiation : public Ihunter{
    private:
        int _target;
        gon* _gon;
        reorio* _reorio;
    public:
        hunterAssosiation(){}
        ~hunterAssosiation(){}
        string getHunterName();
        void setHuntTarget(int target);
        void hunt();
};