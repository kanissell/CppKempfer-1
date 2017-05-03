#include "tlibraryPool.h"
TLibraryPool::TLibraryPool(string n, TPerson* p): Boss(p)
{
    Name = n;
    Boss = p;
}
TLibraryPool::~TLibraryPool()
{

}

void TLibraryPool::add(TPerson* customer)
{
    CustomerList.push_back(customer);
}

void TLibraryPool::add(TLibrary* lib)
{
    LibraryList.push_back(lib);
}

void TLibraryPool::print()
{
    printf("\n");
    cout << getName() << endl;
    cout << "Leitung" << endl;
    Boss->print();
    cout << "\nZum Buecherverband gehoeren " << LibraryList.size() << " Filialen" << endl;
    for(unsigned i = 0; i < LibraryList.size(); i++)
    {
        printf("\n");
        LibraryList.at(i)->print();
        printf("\n");
    }
    cout << "Der Buecherverband hat " << CustomerList.size() << " Kunde/Kunden" << endl;
    for(unsigned j = 0; j < LibraryList.size(); j++)
    {
        printf("\n");
        CustomerList.at(j)->print();
        printf("\n");
    }

}

void TLibraryPool::setname(string n)
{
    Name = n;
}

void TLibraryPool::setBoss(TPerson* b)
{
    Boss = b;
}

void TLibraryPool::setCustomer(vector<TPerson*> cos)
{
    CustomerList = cos;
}

void TLibraryPool::setLibraryList(vector<TLibrary*>lib)
{
    LibraryList = lib;
}

string TLibraryPool::getName()
{
    return Name;
}

TPerson* TLibraryPool::getBoss()
{
    return Boss;
}

vector<TPerson*>TLibraryPool::getCostumerList()
{
    return CustomerList;
}

vector<TLibrary*>TLibraryPool::getLibraryList()
{
    return LibraryList;
}
