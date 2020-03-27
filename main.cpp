#include <iostream>
#include "Jeu.h"
#include "Item.h"
#include "Donjon.h"

using namespace std;

int main()
{
    Jeu* monJeu = new Jeu();

    monJeu->setLesDonjons();

    //cout << "Nom_donjon : " << monJeu->setLesDonjons() << endl;

    return 0;
}
