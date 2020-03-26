#ifndef ENTITE_H
#define ENTITE_H
#include <string>

using namespace std;
class Entite
{
    public:
        Entite();
        virtual ~Entite();
/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */
        string getNom();
        int getId();
        int getNiveau();
        int getVie();
        int getVieMax();
        int getAttaque();
        int getResistance();
        int getInitiative();
        int getCoupCritique();
        int getEchecCritique();
/* *********************************** Setter ********************************************* */
        void setNom(string nom);
        void setId(int id);
        void setNiveau(int niveau);
        void setVie(int vie);
        void setVieMax(int vieMax);
        void setAttaque(int attaque);
        void setResistance(int resistance);
        void setInitiative(int initiative);
        void setCoupCritique(int coupCritique);
        void setEchecCritique(int echecCritique);
    protected:
        string nom;
        int id;
        int niveau;
        int vie;
        int vieMax;
        int attaque;
        int resistance;
        int initiative;
        int coupCritique;
        int echecCritique;
    private:
};

#endif // ENTITE_H
