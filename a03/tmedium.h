#ifndef TMedium_h
#define TMedium_h
#include "tlocation.h"


class TMedium
{
     public:
        enum Status {verfuegbar, ausgeliehen, bestellt, reserviert};
    private:
        string titel;
        string signatur;
        TLocation ort;
        int altersfreigabe;
        Status status;

    public:

    void setTitel(string t);
    void setSignatur(string s);
    void setOrt(TLocation o);
    void setAltersfreigabe(int a);
    void setStatus(Status st);
    void print();

    string getTitel();
    string getSignatur();
    TLocation getOrt();
    int getAltersfreigabe ();
    std:: string getStatus();

    TMedium();
   ~TMedium();
    TMedium(string titel, string signatur,TLocation ort, int Altersfreigabe, TMedium :: Status);
   // TMedium(string titel, string signatur, int Altersfreigabe, TMedium ::verfeugbar);
   // TMedium(string titel, string signatur, int Altersfreigabe,TMedium ::bestellt);
   // TMedium(string titel, string signatur, int Altersfreigabe,TMedium ::reseviert);




};
#endif // TMedium_h
