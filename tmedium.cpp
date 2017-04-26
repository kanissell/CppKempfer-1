//class TMedium

#include <iostream>
#include <string>

using namespace std;

TMedium::TMedium(string Titel, string Signatur, TLocation Location, int Altersvorgabe, status Status):Location(Location)
{
    this->Titel = Titel;
    this->Signatur = Signatur;
}

TMedium::~TMedium(string Titel, string Signatur, TLocation Location, int Altersvorgabe, status Status)
{
    cout << "Objekt gelöscht, mit dem Titel:" << endl << Titel;
}

string TMedium::get_titel() const
{
    return Titel;
}

string TMedium::get_signatur() const
{
    return Signatur;
}

TLocation TMedium::get_location() const
{
    return Location;
}

int TMedium::get_alter() const
{
    return Altersvorgabe;
}

string TMedium::get_status() const
{
    return Status;
}

void TMedium::set_titel(string Titel)
{
    this->Titel = Titel;
}

void TMedium::set_signatur(string Signature)
{
    this->Signature = Signature;
}

void TMedium::set_location(TLocation Location)
{
    this->Location = Location;
}

void TMedium::set_alter(int Altersvorgabe)
{
    this->Altersvorgabe = Altersvorgabe;
}

void TMedium::set_status(status Status)
{
    this->Status = Status;
}

void TMedium::print()
{
    cout << Titel << endl;
    cout << Signatur << endl;
    Location.print();
    cout << Altersvorgabe << endl;
    cout << Status << endl;
}
