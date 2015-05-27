#ifndef KIJELZO_HPP
#define KIJELZO_HPP

#include "graphics.hpp"

#include "widget.hpp"
#include <string>

class Kijelzo: public Widget // címke vezérlõje
{
protected:
    bool checked;
    std::string w_text;
    double ertek1;
    int ertek2;
    int eredmeny;
public:
    Kijelzo(int px, int py, std::string _w_text);
    void draw();
    void handle( genv::event ev );
    void setText(std::string w_text); // szöveg beállítása
    void clearText( );
    void setErtek1(double ertek1);
    double getErtek1() const { return ertek1; };
    void setMuvelet(int ertek2);
    int getMuvelet() const { return ertek2; };
    void setEredmeny(int eredmeny);
    std::string getText() const { return w_text; }; // szöveg lekérdezése
};

#endif // KIJELZO_HPP


