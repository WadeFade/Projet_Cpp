#ifndef GUERRIER_H
#define GUERRIER_H
#include <string>
#include "Joueur.h"

using namespace std;
class Guerrier : public Joueur
{
    public:
        Guerrier();
        virtual ~Guerrier();
/* *********************************** Methodes ******************************************* */
        void criDeGuerre();
        void transcendance();
        virtual void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getForceEsprit();
/* *********************************** Setter ********************************************* */
        void setForceEsprit(int forceEsprit);
    protected:
        int forceEsprit;
    private:
};

#endif // GUERRIER_H
