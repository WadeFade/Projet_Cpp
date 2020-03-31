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
/* *********************************** Getter ********************************************* */

/* *********************************** Setter ********************************************* */

    protected:

    private:
};

#endif // BOSS_H
