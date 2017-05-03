#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>
#include <strstream>
#include "tlocation.h"
#include "tmedium.h"
#include <stdio.h>
using namespace std;

TMedium :: TMedium(string t, string s,TLocation o, int a, Status st):ort(o)
{
    setTitel(t);
    setSignatur(s);
    setAltersfreigabe(a);
    setStatus(st);
    setOrt(o);

}

void TMedium::setTitel(string t)
{
    titel = t;
}
string TMedium::getTitel()
{
    return titel;
}
void TMedium::setSignatur(string s)
{
    signatur = s;
}
string TMedium::getSignatur()
{
    return signatur;
}
void TMedium::setAltersfreigabe(int a)
{
    altersfreigabe = a;
}
void TMedium::setOrt(TLocation o)
{
    ort = o;
}
TLocation TMedium::getOrt()
{
    return ort;
}
int TMedium ::getAltersfreigabe()
{
    return altersfreigabe;
}
void TMedium::setStatus(Status st)
{
    status = st;
}
string TMedium::getStatus()
{
    switch(status)
    {
        case bestellt:
            return "bestellt";
        case verfuegbar:
            return "verfuegbar";
        case reserviert:
            return "reserviert";
        case ausgeliehen:
            return "ausgeliehen";

    }
}

TMedium ::~TMedium()
{
    cout << "Das Medium " << titel << " mit der Signatur " << signatur << " wird vernichtet!" << endl;
}

void TMedium::print()
{
    cout << "Titel: " << getTitel() << endl;
    cout << "Signatur: " << getSignatur() << endl;
    ort.print();
    cout << "FSK: freigegeben ab " << getAltersfreigabe() << " Jahren" << endl;
    cout << "Status: " << getStatus() << endl;

}
