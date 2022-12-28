#include <iostream>
#include "karate.h"
#include "karateImp.h"
#include "retsu.h"

/* Concrete */
void Retsu::punchImp(){
    std::cout << "Retsu:guruguru punch\r\n";    
}

void Retsu::kickImp(){
    std::cout << "Retsu:grobe wo hazusu\r\n";    
}