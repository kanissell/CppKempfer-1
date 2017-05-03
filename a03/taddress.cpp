
#include "taddress.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <cstring>

using namespace std;

/*TAddress::TAddress(string s, string n, string z, string t)
{
    setStreet(s);
    setNumber(n);
    setZipcode(z);
    setTown(t);
}*/
TAddress::TAddress(string s, string n, string z, string t)
{
    setStreet(s);
    setNumber(n);
    setZipcode(z);
    setTown(t);
}
void TAddress::setStreet(string s)
{
    Street = s;
}
string TAddress::getStreet()
{
    return Street;
}
void TAddress::setNumber(string n)
{
    Number = n;
}
string TAddress::getNumber()
{
    return Number;
}
void TAddress::setZipcode(string z)
{
    Zipcode = z;
}
string TAddress::getZipcode()
{
    return Zipcode;
}
void TAddress::setTown(string t)
{
    Town = t;
}
string TAddress::getTown()
{
    return Town;
}
void TAddress::print()
{

    cout << Street.c_str() << " "<<Number.c_str();
    cout << "\n";
    cout << Zipcode.c_str() << " "<<Town.c_str();

}
