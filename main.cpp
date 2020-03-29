#include <iostream>
#include "Jeu.h"
#include "Item.h"
#include "Donjon.h"
#include "windows.h"

using namespace std;

int main()
{
    Jeu* monJeu = new Jeu();
    Donjon* monDonjon = new Donjon();

    monJeu->setLesDonjons();
    monDonjon->setSalle();
    monJeu->getDonjons();
    monDonjon->getSalles();
    return 0;
}
