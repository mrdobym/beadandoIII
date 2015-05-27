#include "kijelzo.hpp"
#include <iostream>
using namespace std;
using namespace genv;

Kijelzo::Kijelzo(int px, int py, string _w_text)
: Widget(px, py, 200, 20)
{
    checked = false;
    w_text = _w_text;
}
void Kijelzo::draw()
{
    gout << move_to(x-2,y) << color(255,255,255);
    gout << box(size_x+2,size_y);
    gout << move_to(x, y + gout.cascent() + 2);
    gout << color(0,0,0) << text(w_text);
}

void Kijelzo::setText(std::string text)
{
    w_text += text;
}

void Kijelzo::clearText( )
{
    w_text = "";
}

void Kijelzo::setErtek1(double szam1)
{
    ertek1 = szam1;
}

double getErtek1();

void Kijelzo::setMuvelet(int szam2)
{
    ertek2 = szam2;
}

int getMuvelet();

void Kijelzo::setEredmeny(int szam3)
{
    eredmeny = szam3;
}

std::string getText();


void Kijelzo::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left ) checked = !checked;
}
