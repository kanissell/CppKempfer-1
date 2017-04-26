#ifndef TLIBRARY_H
#define TLIBRARY_H

#include <vector>

#include "taddress.h"
#include "tperson.h"
#include "tmedium.h"

class TLibrary
{
    private:
        std::string Name;
        TAddress Address;
        TPerson Fillialleiter;
        vector<*TMedium> Medien;

    public:
        TLibrary::TLibrary(std::string Name, TAddress Adresse, TPerson *Fillialleiter, vector<*TMedium> Medien);
        ~TLibrary::TLibrary(std::string Name, TAddress Adresse, TPerson *Fillialleiter, vector<*TMedium> Medien);
        void add(TMedium*);
};


#endif