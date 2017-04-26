//class TLibrary

#include <iostream>
#include <string>
#include <vector>

#include "taddress.h"
#include "tperson.h"
#include "tlibrary.h"
#include "tmedium.h"

using namespace std;

TLibrary::TLibrary(string Name, TAddress Address, TPerson *Fillialleiter, vector<*TMedium> Medien)
        :Address(Address)
{
    this->Name = Name;
}

void TLibrary::add(TMedium* Medium)
{
    Medien.push_back(Medium);
}
