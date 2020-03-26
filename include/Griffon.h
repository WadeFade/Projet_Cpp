#ifndef GRIFFON_H
#define GRIFFON_H
#include <string>
#include "Boss.h"

using namespace std;
class Griffon : public Boss
{
    public:
        Griffon();
        virtual ~Griffon();
/* *********************************** Methodes ******************************************* */
        void vol();
        void atteris();
        void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getTauxVueAiguiser();
/* *********************************** Setter ********************************************* */
        void setTauxVueAiguiser(int tauxVueAiguiser);
    protected:
        int tauxVueAiguiser;
    private:
};

#endif // GRIFFON_H
