#pragma once
#include <iostream>

/* Abstract */
class abstract_FW{
    public:
        virtual void shoot() = 0;
        virtual ~abstract_FW(){}
};

/* Abstract */
class abstract_Manager{
    public:
        virtual void tactics() = 0;
        virtual ~abstract_Manager(){}
};

/* Abstract */
class soccerteam_Abstractfactory{
    public:
        virtual abstract_FW *CreatePlayer() = 0;
        virtual abstract_Manager *CreateManager() = 0;
        virtual ~soccerteam_Abstractfactory(){};
};
