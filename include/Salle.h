#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <iostream>
#include "Donjon.h"
using namespace std;

class Salle
{
    public:
        Salle();
        virtual ~Salle();
//같같같같같같� methodes 같같같같같같�
        void affichageSalle();
//같같같같같같같 setter 같같같같같같같
        void setNum(int num);

        void setEnvironnement(int environnement);

//같같같같같같같 getter 같같같같같같같
        int getNum();
        int getEnvironnement();

    protected:
    private:
        int num;
        int environnement;

};

#endif // SALLE_H
