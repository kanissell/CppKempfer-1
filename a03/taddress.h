#ifndef TADDRESS_H
#define TADDRESS_H
#include <string>
#include <stdio.h>
#include <strstream>
#include <fstream>
using namespace std;
class TAddress
{
    private:
        string Street;
        string Number;
        string Zipcode;
        string Town;

    public:
        void setStreet(string s);
        void setNumber(string n);
        void setZipcode(string z);
        void setTown(string t);

        string getStreet();
        string getNumber();
        string getZipcode();
        string getTown();

        TAddress();
        TAddress(string Street, string Number, string Zipcode, string Town);
        // TAddress(string Street, string Number, string Zipcode, string Town);

        void print();
};
#endif // TAddress_h
