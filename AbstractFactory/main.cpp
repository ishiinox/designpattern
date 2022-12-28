#include <iostream>
#include "Abstract.h"
#include "Sanfrecce.h"
#include "Japan.h"

int main()
{
    int team;
    soccerteam_Abstractfactory *factory;

    std::cout << "Enter team(0:sanfrecce, 1:Japan)";
    std::cin >> team;
 
    switch(team){
        case 0:
            factory = new Sanfrecce();
            break;
        case 1:
            factory = new Japan();
            break;
    }   

    /* ここからは変わらない、具象クラスは意識していない */

    if (factory != NULL){
    abstract_FW * fw = factory->CreatePlayer();
    abstract_Manager * mg = factory->CreateManager();
    
    mg->tactics();
    fw->shoot();
    delete fw;
    delete factory;
    }else{
        std::cerr << "error";
    }

    return 0;
}