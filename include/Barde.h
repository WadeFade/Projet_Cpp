#ifndef BARDE_H
#define BARDE_H
#include <string>
#include "Joueur.h"

using namespace std;
class Barde : public Joueur
{
    public:
        Barde();
        virtual ~Barde();
/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */
        double getMultiplicateurEXP();
/* *********************************** Setter ********************************************* */
        void setMultiplicateurEXP(double multiplicateurEXP);

    protected:
        double multiplicateurEXP;
    private:
};

#endif // BARDE_H
