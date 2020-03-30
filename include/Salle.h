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
        void setNum(int num);
        int getNum();

    protected:
        int num;

    private:
};

#endif // SALLE_H
