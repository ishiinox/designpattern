#include <iostream>
#include <string>
#include "hunterAssosiation.h"

using namespace std;

int main(){
    int target;
    string member;
    hunterAssosiation* _hunterAssosiation = new hunterAssosiation();

    member = _hunterAssosiation->getHunterName();
    std::cout << member;

    std::cout << "Enter target(0:chimera ant, 1:medical)";
    std::cin >> target;

    _hunterAssosiation->setHuntTarget(target);
    _hunterAssosiation->hunt();

    _hunterAssosiation->hunt();
}