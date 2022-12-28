#include <iostream>
#include "Abstract.h"
#include "Sanfrecce.h"

/* Concrete */
void PIEROS_SOTIRIOU::shoot(){
    std::cout << "PIEROS_SOTIRIOU:shoot\r\n";
}

/* Concrete */
void Skibbe::tactics(){
    std::cout << "Skibbe:3-6-1\r\n";
}

/* Concrete */
abstract_Manager *Sanfrecce::CreateManager(){
    return new Skibbe();
}

abstract_FW *Sanfrecce::CreatePlayer(){
    return new PIEROS_SOTIRIOU();
}
