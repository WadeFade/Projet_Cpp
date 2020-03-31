#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include "Monstre.h"
using namespace std;
class Zombie : public Monstre
{
    public:
        Zombie();
        virtual ~Zombie();
/* *********************************** Methodes ******************************************* */
        void mutation();
        virtual void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getTauxInfection();
/* *********************************** Setter ********************************************* */
        void setTauxInfection(int tauxInfection);
    protected:

    private:
        int tauxInfection;
};

#endif // ZOMBIE_H
