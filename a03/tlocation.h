#ifndef TLOCATION_H
#define TLOCATION_H
#include <fstream>
#include <iostream>
#include <string>
#include <strstream>

using namespace std;

class TLocation
{
    private:
        string selection;
        string rack;

    public:
        TLocation();
        TLocation(string selection, string rack);
        void print();

        bool SetSelection(string selection = "Buero");
        string GetSelection(){return selection;}

        bool SetRack(string rack = "Fach zum Einsortieren");
        string GetRack(){return rack;}
};
#endif // TLOCATION_H
