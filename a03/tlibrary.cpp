#include "tlibrary.h"
#include "taddress.h"

TLibrary::TLibrary(string name, TAddress address, TPerson* Person ):addresse(address), Manager(Person)
{
  Name = name;
  addresse = address;
  Manager = Person;

}
void TLibrary::add(TMedium* medium)
{
    MediumList.push_back(medium);
}
TLibrary::~TLibrary()
{

}
void TLibrary::setName(string n)
{
    Name = n;
}
void TLibrary::setAddress(TAddress a)
{
    addresse = a;
}
void TLibrary::setManager(TPerson* m)
{
    Manager = m;
}
void TLibrary::setMediumList(vector<TMedium*> val)
{
    MediumList = val;
}
string TLibrary::getName()
{
    return Name;
}
TAddress TLibrary::getaddress()
{
    return addresse;
}
TPerson* TLibrary::getManager()
{
    return Manager;
}
vector <TMedium*> TLibrary::getMediumList()
{
    return MediumList;
}

void TLibrary::print()
{
    cout << "Buecherei Filiale" << getName() << endl;
    addresse.print();
    cout << "Filialleister: " << endl;
    Manager->print();
    cout << "Es stehen " << MediumList.size() << " Medium/Medien zur Verfuegung:" << endl;
    for(unsigned i = 0; i < MediumList.size(); i++)
    {
        printf("\n");
        MediumList.at(i)->print();
        printf("\n");
    }

}