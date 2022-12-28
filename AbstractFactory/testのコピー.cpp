#include <iostream>

/* Abstract */
class abstract_FW{
    public:
        virtual void shoot() = 0;
        virtual ~abstract_FW(){}
};

/* Concrete */
class PIEROS_SOTIRIOU : public abstract_FW{
    public:
        void shoot() override{
            std::cout << "PIEROS_SOTIRIOU:shoot\r\n";
        }
        ~PIEROS_SOTIRIOU(){}
};

/* Abstract */
class abstract_Manager{
    public:
        virtual void tactics() = 0;
        virtual ~abstract_Manager(){}
};

/* Concrete */
class Skibbe : public abstract_Manager{
    public:
        void tactics() override{
            std::cout << "Skibbe:tactics\r\n";
        }
        ~Skibbe(){}
};


/* Abstract */
class soccerteam_Abstractfactory{
    public:
        virtual abstract_FW *CreatePlayer() = 0;
        virtual abstract_Manager *CreateManager() = 0;
        virtual ~soccerteam_Abstractfactory(){};
};


/* Concrete */
class Sanfrecce : public soccerteam_Abstractfactory{
    public:
        abstract_FW *CreatePlayer() {
            return new PIEROS_SOTIRIOU();
        };
        abstract_Manager *CreateManager(){
            return new Skibbe();
        }
        ~Sanfrecce(){}
};

class Sakatsuku{
    public:
        Sakatsuku(soccerteam_Abstractfactory *factory){
            if (factory != NULL){
                abstract_FW * fw = factory->CreatePlayer();
                abstract_Manager * mg = factory->CreateManager();
                fw->shoot();
                mg->tactics();
                delete fw;
                delete factory;
            }else{
                std::cerr << "error";
            }
        }
};


/* Abstract Factory */
soccerteam_Abstractfactory *createSakatsuku(){
    int team;
    std::cout << "Enter team(0:sanfrecce, 1:gamba)";
    std::cin >> team;

    switch(team){
        case 0:
            return new Sanfrecce();
    }
}

int main()
{
    Sakatsuku sakatsuku(createSakatsuku());

    return 0;
}