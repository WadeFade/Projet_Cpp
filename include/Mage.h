#ifndef MAGE_H
#define MAGE_H
#include <string>
#include "Joueur.h"

using namespace std;
class Mage : public Joueur
{
    public:
        Mage();
        virtual ~Mage();
/* *********************************** Methodes ******************************************* */
        virtual void affichageEntite();

/* *********************************** Getter ********************************************* */


/* *********************************** Setter ********************************************* */


    protected:

    private:
};

#endif // MAGE_H
