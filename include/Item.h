#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;


class Item
{
    public:
        Item();
        virtual ~Item();
//==========methodes=========
        virtual void affichageItem();
//============setter===============
        void setIdItem(int id);
        void setNomItem(string nom);
        void setTauxDrop(double taux);
//===========getter================
        int getIdItem();
        string getNomItem();
        double getTauxDrop();

    protected:
        int idItem;
        string nomItem;
        double tauxDrop;

    private:
};

#endif // ITEM_H
