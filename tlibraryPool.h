#ifndef TLIBRARYPOOL_H
#define TLIBRARYPOOL_H

#include <vector>

#include "taddress.h"
#include "tperson.h"
#include "tmedium.h"
#include "tlibrary.h"

class TLibraryPool
{
private:
    std::string Name;
    TPerson* Chef;
    std::vector<TLibrary*> Fillialen;
    std::vector<TPerson*> Kunden;

public:
    TLibraryPool(std::string, TPerson*, std::vector<TPerson*>);
    void add(TLibrary*);
    void add(TPerson*);
};