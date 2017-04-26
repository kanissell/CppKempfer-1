//class TLibraryPool

#include <iostream>
#include <string>
#include <vector>

#include "taddress.h"
#include "tperson.h"
#include "tmedium.h"
#include "tlibrary.h"
#include "tperson.h"
#include "tlibraryPool.h"

using namespace std;

TLibraryPool::TLibraryPool(string Name, vector<TMedium*> Fillialen, vector<TPerson*> Kunden)
{
    this->Name = Name;
}

void TLibraryPool::add(TLibrary* Filliale)
{
    Fillialen.push_back(Filliale);
}

void TLibraryPool::add(TPerson* Kunde)
{
    Kunden.push_back(Kunde);
}

