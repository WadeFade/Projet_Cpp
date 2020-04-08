#ifndef BOSS_H
#define BOSS_H
#include <string>
#include "Monstre.h"

using namespace std;
class Boss : public Monstre
{
    public:
        Boss();
        virtual ~Boss();
/* *********************************** Methodes ******************************************* */
        virtual void affichageEntite();
        virtual void sePrendUnCoup(int attaqueDansLaTronche);
        virtual int donneUnCoup();
        virtual int type();
        virtual bool estMort();
        virtual void multiplicationStatistique(double multiplicateur);
/* *********************************** Getter ********************************************* */

/* *********************************** Setter ********************************************* */

    protected:
    private:
};

#endif // BOSS_H
