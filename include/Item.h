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
//===========getter================
        int getIdItem();
        string getNomItem();

    protected:
        int idItem;
        string nomItem;
<<<<<<< HEAD
        double tauxDrop;
=======
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
    private:
};

#endif // ITEM_H
