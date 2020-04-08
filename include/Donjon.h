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
        Donjon(int numeroDonjon);
        virtual ~Donjon();
//������������� methodes �������������
        void affichageDonjon();

//�������������� setter ��������������
        void setSalle();
        void setNom(string nom);

//�������������� getter ��������������
        string getNom();
        vector<Salle*> getSalles();
        Salle* getSalles(int num);

    protected:
        string nom;
        vector<Salle*> lesSalles;

    private:
};

#endif // DONJON_H
