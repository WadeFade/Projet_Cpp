#ifndef MONSTRE_H
#define MONSTRE_H
#include <string>
#include "Entite.h"

using namespace std;
class Monstre : public Entite
{
    public:
        Monstre();
        virtual ~Monstre();
/* *********************************** Methodes ******************************************* */

/* *********************************** Getter ********************************************* */
        string getElement();
/* *********************************** Setter ********************************************* */
        void setElement(string element);
    protected:
        string element;
    private:
};

#endif // MONSTRE_H
