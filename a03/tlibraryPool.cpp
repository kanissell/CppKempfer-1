#include "tlibraryPool.h"
TLibraryPool::TLibraryPool(string n, TPerson* p)
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
   cout << getName() << endl;


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
