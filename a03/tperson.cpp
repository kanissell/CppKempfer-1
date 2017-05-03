#include <iostream>
#include  "ttime.h"
#include <ctime>
#include <iomanip>
#include "tperson.h"
#include <string>
#include "taddress.h"
#include "tdate.h"
using namespace std;


TPerson::TPerson(string n, TAddress a, TDate d)
:Address(a),Date(d)
{
    setName(n);
   // setAddress(a);
    //setDate(d);
}
TPerson::~TPerson()
{
 cout << "Die Person " << Name << " wird vernichtet!" << endl;
}
void TPerson::setName(string n)
{
    Name = n;
}
string TPerson::getName()
{
    return Name;
}
void TPerson::setAddress(TAddress a)
{
    Address = a;
}
TAddress TPerson::getAddress()
{
    return  Address;
}
void TPerson::setDate(TDate d)
{
    Date = d;

}
TDate TPerson::getDate()
{
    return Date;
}
void TPerson::print()
{
    printf("%s\n",Name.c_str());
    Address.print();

    Date.print();
}


