#ifndef TLIBRARYPOOL_H
#define TLIBRARYPOOL_H

#include "tperson.h"
#include "tlibrary.h"
#include <vector>

class TLibraryPool
{
    private:
        string Name;
        TPerson *Boss;
        vector<TLibrary*> LibraryList;
        vector<TPerson*>CustomerList;

    public:
        TLibraryPool(string n, TPerson* b);
        ~TLibraryPool();

        void add(TLibrary*);
        void add(TPerson*);
        void print();

        void  setname(string n);
        void setBoss(TPerson* b);
        void setCustomer(vector<TPerson*> cos);
        void setLibraryList(vector<TLibrary*> lib);

        string getName();
        TPerson* getBoss();
        vector <TLibrary*> getLibraryList();
        vector <TPerson*> getCostumerList();


};
#endif // TLIBRARYPOOL
