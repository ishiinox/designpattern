#include <iostream>
#include "karate.h"

class Kungfu : public Karate{
    public:
    Kungfu(KarateImp* karateimplementation) : Karate(karateimplementation){}
        void shaori();
};