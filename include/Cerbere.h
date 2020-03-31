#ifndef CERBERE_H
#define CERBERE_H
#include <string>
#include "Boss.h"

using namespace std;
class Cerbere : public Boss
{
    public:
        Cerbere();
        virtual ~Cerbere();
/* *********************************** Methodes ******************************************* */
        void aFaim();
        void manger();
        virtual void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getFaim();
/* *********************************** Setter ********************************************* */
        void setFaim(int faim);
    protected:
        int faim;
    private:
};

#endif // CERBERE_H
