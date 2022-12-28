#pragma once
#include <iostream>
#include "nennouryokusha_decorator.h"

class chain_jail : public nennnouryokusha_decorator {
    public:
        chain_jail(nennnouryokusha* _nennnouryokusha) : nennnouryokusha_decorator(_nennnouryokusha){}
        void nennnouryoku();
        ~chain_jail();
};

class judgement_chain : public nennnouryokusha_decorator {
    public:
        judgement_chain(nennnouryokusha* _nennnouryokusha) : nennnouryokusha_decorator(_nennnouryokusha){}
        void nennnouryoku();
        ~judgement_chain();
};

class steal_chain : public nennnouryokusha_decorator {
    public:
        steal_chain(nennnouryokusha* _nennnouryokusha) : nennnouryokusha_decorator(_nennnouryokusha){}
        void nennnouryoku();
        ~steal_chain();
};