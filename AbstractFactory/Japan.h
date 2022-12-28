#pragma once

/* Concrete */
class Doan : public abstract_FW{
    public:
        void shoot();
        ~Doan(){}
};

/* Concrete */
class Moriyasu : public abstract_Manager{
    public:
        void tactics();
        ~Moriyasu(){}
};

/* Concrete */
class Japan : public soccerteam_Abstractfactory{
    public:
        abstract_FW *CreatePlayer();
        abstract_Manager *CreateManager();
        ~Japan(){}
};