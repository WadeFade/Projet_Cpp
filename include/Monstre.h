#ifndef MONSTRE_H
#define MONSTRE_H
#include <string>
#include "Entite.h"

using namespace std;
class Monstre : public Entite
{
    public:
        Monstre();
        virtual ~Monstre();
/* *********************************** Methodes ******************************************* */
        virtual void affichageEntite();
        virtual void sePrendUnCoup(int attaqueDansLaTronche);
        virtual int donneUnCoup();
        virtual bool estMort();
        virtual void multiplicationStatistique(double multiplicateur);
/* *********************************** Getter ********************************************* */
        string getElement();
/* *********************************** Setter ********************************************* */
        void setElement(string element);
    protected:
        string element;
    private:
};

#endif // MONSTRE_H
