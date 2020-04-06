#ifndef ENTITE_H
#define ENTITE_H
#include <string>
#include "couleur.h"

using namespace std;
class Entite
{
    public:
        Entite();
        virtual ~Entite();
/* *********************************** Methodes ******************************************* */
        virtual void affichageEntite();
        // virtual pour peut être plus tard déclenché, des capacités particulières
        virtual void sePrendUnCoup(int attaqueDansLaTronche);
        virtual int donneUnCoup();
        bool estMort();
/* *********************************** Getter ********************************************* */
        string getNom();
        int getVie();
        int getVieMax();
        int getAttaque();
        int getResistance();
        int getInitiative();
        int getCoupCritique();
        int getEchecCritique();
        int getEsquive();
        //int getEstMort();
/* *********************************** Setter ********************************************* */
        void setNom(string nom);
        void setVie(int vie);
        void setVieMax(int vieMax);
        void setAttaque(int attaque);
        void setResistance(int resistance);
        void setInitiative(int initiative);
        void setCoupCritique(int coupCritique);
        void setEchecCritique(int echecCritique);
        void setEsquive(int esquive);
        //void setEstMort(int estMort);
    protected:
        string nom;
        //int estMort;
        int vie;
        int vieMax;
        int attaque;
        int resistance;
        int initiative;
        int coupCritique;
        int echecCritique;
        int esquive;
        couleur color;
    private:
};

#endif // ENTITE_H
