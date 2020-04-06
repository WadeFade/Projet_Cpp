#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <iostream>
#include "Donjon.h"
#include "Monstre.h"
#include "couleur.h"
using namespace std;

class Salle
{
    public:
        Salle();
        virtual ~Salle();
//같같같같같같� methodes 같같같같같같�
        void affichageSalle();
        void mettreEnCouleur(int t, int f);
//같같같같같같같 setter 같같같같같같같
        void setNum(int num);
        void setEnvironnement(int environnement);
        void setLesMonstresDeLaSalle(Monstre* monstre);

//같같같같같같같 getter 같같같같같같같
        int getNum();
        int getEnvironnement();
        vector<Monstre*> getLesMonstresDeLaSalle();
        Monstre* getMonstre(int indexMonstre);

    protected:
    private:
        int num;
        int environnement;
        vector<Monstre*> lesMonstresDeLaSalle;
        couleur color;

};

#endif // SALLE_H
