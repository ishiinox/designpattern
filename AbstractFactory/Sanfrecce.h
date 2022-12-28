#pragma once

/* Concrete */
class PIEROS_SOTIRIOU : public abstract_FW{
    public:
        void shoot();
        ~PIEROS_SOTIRIOU(){}
};

/* Concrete */
class Skibbe : public abstract_Manager{
    public:
        void tactics();
        ~Skibbe(){}
};

/* Concrete */
class Sanfrecce : public soccerteam_Abstractfactory{
    public:
        abstract_FW *CreatePlayer();
        abstract_Manager *CreateManager();
        ~Sanfrecce(){}
};