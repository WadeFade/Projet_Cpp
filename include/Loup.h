#ifndef LOUP_H
#define LOUP_H
#include <string>
#include "Monstre.h"

using namespace std;
class Loup : public Monstre
{
    public:
        Loup();
        virtual ~Loup();
/* *********************************** Methodes ******************************************* */
        void aiguiser();
        virtual void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getTauxFaim();
/* *********************************** Setter ********************************************* */
        void setTauxFaim(int tauxFaim);
    protected:
        int tauxFaim;
    private:
};

#endif // LOUP_H
