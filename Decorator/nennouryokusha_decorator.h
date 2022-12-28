#pragma once
#include <iostream>
#include "nennouryokusha.h"

class nennnouryokusha_decorator : public nennnouryokusha {
    private:
        nennnouryokusha* mynennnouryokusha;
    public:
        nennnouryokusha_decorator(nennnouryokusha* _nennnouryokusha) : mynennnouryokusha(_nennnouryokusha){}
        void call_nennnouryoku();
        ~nennnouryokusha_decorator();
};