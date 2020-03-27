#include "Boss.h"
#include <string>
#include <iostream>

using namespace std;
Boss::Boss()
{
    //ctor
}

Boss::~Boss()
{
    //dtor
}

void Boss::affichageEntite(){
    cout << "Entite : " << endl;
    cout << "Attaque : " << this->attaque << endl;
    cout << "Resistance : " << this->resistance << endl;
    cout << "Initiative : " << this->initiative << endl;
    cout << "CoupCritique : " << this->coupCritique << endl;
    cout << "EchecCritique : " << this->echecCritique << endl;
    cout << "Esquive : " << this->esquive << endl;
}
