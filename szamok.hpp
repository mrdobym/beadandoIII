#ifndef SZAMOK_HPP
#define SZAMOK_HPP

#include "widget.hpp"
#include "button.hpp"
#include "kijelzo.hpp"
#include <string>

using namespace std;

class SzamOK : public Button // gomb vezérlõje
{
public:
    Szamok(int px, int py, int sx, int sy, int szam)
     : Button(px, py, sx, sy, text) // megkapja a módosítandó címkét is
    {
        szamocska = szam;
    }
protected:
    void action() // módosítás akciója
    {

    }

    string szamocska;
};

#endif // SZAMOK_HPP
