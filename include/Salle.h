#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <iostream>
#include "Donjon.h"
#include "Armes.h"
#include "Item.h"
#include "Consommables.h"
#include "Armures.h"
#include "Cristaux.h"
using namespace std;

class Salle
{
    public:
        Salle();
        virtual ~Salle();
//같같같같같같� methodes 같같같같같같�
        void affichageSalle();
        void lootSalle(int numDonjon, int numSalle, vector<Armes*> tableauEpees, vector<Armes*> tableauArcs, vector<Armes*> tableauBaguettes, vector<Armes*> tableauDagues, vector<Armes*> tableauBatons, vector<Armes*> tableauPelles, vector<Armes*> tableauMarteaux, vector<Armures*> tableauArmures, vector<Consommables*> tableauPotionsSoin, vector<Consommables*> tableauPotionsMana, vector<Cristaux*> tableauCristauxVie, vector<Cristaux*> tableauCristauxMana);
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
