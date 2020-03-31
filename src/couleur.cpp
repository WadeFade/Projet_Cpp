#include "couleur.h"
#include <windows.h>

couleur::couleur()
{
    //ctor
}

couleur::~couleur()
{
    //dtor
}

void couleur::mettreEnCouleur(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}
