#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;


class Item
{
    public:
        Item();
        virtual ~Item();
//============setter===============
        void setIdItem(int id);
        void setNomItem(string nom);
//===========getter================
        int getIdItem();
        string getNomItem();

    protected:
        int idItem;
        string nomItem;


    private:
};

#endif // ITEM_H
