#ifndef DONJON_H
#define DONJON_H
#include <string>
#include <iostream>
#include <vector>
#include "Salle.h"

using namespace std;
using std::vector;

class Salle;

class Donjon
{
    public:
        Donjon();
        virtual ~Donjon();
        void setNom(string nom);
        string getNom();
        void setSalle();
        vector<Salle*> getSalle();

    protected:
        string nom;
        vector<Salle*> lesSalles;

    private:
};

#endif // DONJON_H
