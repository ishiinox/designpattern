#pragma once
#include <iostream>

class KarateImp{
    public:
        virtual void punchImp() = 0;
        virtual void kickImp() = 0;
        virtual ~KarateImp(){};
};