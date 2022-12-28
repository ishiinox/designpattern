#include <iostream>
#include "chain.h"

/* Concrete */
void chain_jail::nennnouryoku(){
    std::cout << "chain_jail\r\n";
    nennnouryokusha_decorator::call_nennnouryoku();
}

void judgement_chain::nennnouryoku(){
    std::cout << "judgement_chain\r\n";
    nennnouryokusha_decorator::call_nennnouryoku();
}

void steal_chain::nennnouryoku(){
    std::cout << "steal_chain\r\n";
    nennnouryokusha_decorator::call_nennnouryoku();
}