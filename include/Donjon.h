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
//같같같같같같� methodes 같같같같같같�
        void affichageDonjon();

//같같같같같같같 setter 같같같같같같같
        void setSalle();
        void setNom(string nom);

//같같같같같같같 getter 같같같같같같같
        string getNom();
        Salle* getSalles(int num);

    protected:
        string nom;
        vector<Salle*> lesSalles;
    private:
};

#endif // DONJON_H
