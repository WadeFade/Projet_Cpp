#ifndef ELEMENTAIRE_H
#define ELEMENTAIRE_H
#include <string>
#include "Monstre.h"

using namespace std;
class Elementaire : public Monstre
{
    public:
        Elementaire();
        virtual ~Elementaire();
/* *********************************** Methodes ******************************************* */
        void changeElement();
        virtual void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getSurcharge();
/* *********************************** Setter ********************************************* */
        void setSurcharge(int surcharge);
    protected:
        int surcharge;
    private:
};

#endif // ELEMENTAIRE_H
