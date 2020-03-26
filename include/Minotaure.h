#ifndef MINOTAURE_H
#define MINOTAURE_H
#include <string>
#include "Boss.h"

using namespace std;
class Minotaure : public Boss
{
    public:
        Minotaure();
        virtual ~Minotaure();
/* *********************************** Methodes ******************************************* */
        void ceMetEnRage();
        void affichageEntite();
/* *********************************** Getter ********************************************* */
        int getTauxRage();
/* *********************************** Setter ********************************************* */
        void setTauxRage(int tauxRage);
    protected:
        int tauxRage;
    private:
};

#endif // MINOTAURE_H
