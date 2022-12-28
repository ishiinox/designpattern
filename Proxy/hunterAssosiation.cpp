#include <iostream>
#include "hunterAssosiation.h"

using namespace std;

/* Concrete */
string hunterAssosiation::getHunterName(){
    string ret;
    ret = "hunter:gon, reorio\r\n";
    return ret;
};

void hunterAssosiation::setHuntTarget(int target){
    _target = target;
};

void hunterAssosiation::hunt(){
    if (_target == 0){/* キメラアント討伐はゴンに依頼する */
        if(_gon == NULL){
            _gon = new gon();
        }
        _gon->hunt();
    }else if (_target == 1){/* レオリオには薬を頼む */
        if(_reorio == NULL){
            _reorio = new reorio();
        }
        _reorio->hunt();
    }else{
        std::cerr << "error\r\n";
    }
};