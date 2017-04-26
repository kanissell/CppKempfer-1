#ifndef TMEDIUM_H
#define TMEDIUM_H

#include "tlocation.h"

class TMedium
{
    private:
        enum status {verfuegbar, ausgeliehen, bestellt, reserviert};
        std::string Titel;
        std::string Signatur;
        TLocation Location;
        int Altersvorgabe;
        status Status;

    public:
        TMedium(std::string Titel, std::string Signatur, TLocation Location, int Altersvorgabe, status Status);
        ~TMedium(std::string Titel, std::string Signatur, TLocation Location, int Altersvorgabe, status Status);
        std::string get_titel() const;
        std::string get_signature() const;
        TLocation get_location() const;
        int get_alter() const;
        std::string get_status() const;
        void set_titel(std::string);
        void set_signature(std::string);
        void set_location(TLocation);
        void set_alter(int);
        void set_status(std::string);
        void print();


};