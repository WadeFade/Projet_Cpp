#ifndef DONJON_H
#define DONJON_H
#include <string>
#include <iostream>
#include <vector>

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
        void mettreNumSalle();

    protected:
        string nom;
        vector<Salle*> lesSalles;

    private:
};

#endif // DONJON_H
