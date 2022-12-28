#include <iostream>
#include "karate.h"
#include "karateImp.h"

/* Concrete */
void Karate::punch(){
    imp->punchImp();
}

void Karate::kick(){
    imp->kickImp();
}
