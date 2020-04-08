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
#include "Monstre.h"
#include "couleur.h"
#include "Boss.h"

using namespace std;
class Salle
{
    public:
        Salle();
        Salle(int numeroDonjon);
        Salle(int numeroSalle, int numeroDonjon);
        virtual ~Salle();
//������������� methodes �������������
        void affichageSalle();
        void lootSalle(int numDonjon, int numSalle, vector<Item*> items);
        void mettreEnCouleur(int t, int f);

//�������������� setter ��������������
        void setNum(int num);
        void setEnvironnement(int environnement);
        void setLesMonstresDeLaSalle(Monstre* monstre);
        void setLesBoss(Boss* boss);

//�������������� getter ��������������
        int getNum();
        int getEnvironnement();
        vector<Monstre*> getLesMonstresDeLaSalle();
        vector<Boss*> getLesBossDuDonjon();
        Boss* getBoss(int indexBoss);
        Monstre* getMonstre(int indexMonstre);

    protected:
    private:
        int num;
        int environnement;
        vector<Monstre*> lesMonstresDeLaSalle;
        vector<Boss*> lesBoss;
        couleur color;
};

#endif // SALLE_H
