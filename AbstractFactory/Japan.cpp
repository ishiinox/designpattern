#include <iostream>
#include "Abstract.h"
#include "Japan.h"

/* Concrete */
void Doan::shoot(){
    std::cout << "Doan:shoot\r\n";
}

/* Concrete */
void Moriyasu::tactics(){
    std::cout << "Moriyasu:5-4-1\r\n";
}

/* Concrete */
abstract_Manager *Japan::CreateManager(){
    return new Moriyasu();
}

abstract_FW *Japan::CreatePlayer(){
    return new Doan();
}
