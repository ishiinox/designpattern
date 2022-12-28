#pragma once
#include <iostream>
#include "karateImp.h"

class Karate{
    protected:
        KarateImp* imp;

    public:
        Karate(KarateImp* karateimplementation) : imp(karateimplementation){}
        void punch();
        void kick();
};