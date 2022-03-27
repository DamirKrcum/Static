#include <iostream>
#include "pomocneFunkcije.h"
#include "Osoba.h"
using namespace std;

int Osoba::brojOsoba = 0;
Osoba* Osoba::_listaOsoba;
int main()
{
   
    Osoba D("Damir Krcum");
    Osoba A("Annika Hansen");
    Osoba P("Patrick Stewart");
    Osoba W("William Shatner");
    Osoba L("Leonard Nimoy");
    Osoba K("DeForest Kelley");
    Osoba S("Sherry Jackson");
    
   // Staticka funkcija koja printa staticki dinamicki niz :) 
    Osoba::PrintList();
}

