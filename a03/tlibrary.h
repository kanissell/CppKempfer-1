#ifndef TLIBRARY_H
#define TLIBRARY_H
#include <vector>
#include "taddress.h"
#include "tmedium.h"
#include "tperson.h"
#include "tlocation.h"
using namespace std;


class TLibrary
{
    private:
        string Name;
        TAddress addresse;
        TPerson* Manager;
        vector<TMedium*>MediumList;


    public:
        TLibrary(string name, TAddress address, TPerson* Person);
        ~TLibrary();
        void setName(string n);
        void setAddress(TAddress a);
        void setManager(TPerson* m);
        void setMediumList(vector<TMedium*> val);

        string getName();
        TAddress getaddress();
        TPerson* getManager();
        vector<TMedium*>getMediumList();
        void add(TMedium*);


};
#endif // TLibrary_h
