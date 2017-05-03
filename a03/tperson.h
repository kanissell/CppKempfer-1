#ifndef TPerson_h
#define TPerson_h
 #include <string>
 #include <iostream>
 #include "taddress.h"
 #include "tdate.h"
 #include "tperson.h"

class TPerson
{
    private:
        string Name;
        TAddress Address;
        TDate Date;

    public:
        void setName(string n);
        void setAddress( TAddress a);
        void setDate(TDate d);
        string getName();
        TAddress getAddress();
        TDate getDate();

        TPerson();
        ~TPerson();

        TPerson(string Name, TAddress Address, TDate Date);
        void print();



};
#endif // TPerson_h
