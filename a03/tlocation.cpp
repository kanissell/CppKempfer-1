#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>
#include <strstream>
#include "tlocation.h"
using namespace std;

TLocation::TLocation()
{
    SetSelection();
    SetRack();
}
TLocation::TLocation(string selection, string rack)
{
    SetSelection(this->selection = selection);
    SetRack(this->rack = rack);

}
bool TLocation::SetSelection(string selection)
{
    this->selection=selection;
}
bool TLocation::SetRack(string rack)
{
    this->rack=rack;
}
void TLocation::print()
{
    cout << "Abt.: " << GetSelection();
    cout << " ";
    cout << "Abt.: " << GetRack();
}
