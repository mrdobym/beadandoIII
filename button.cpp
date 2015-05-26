#include "button.hpp"
using namespace genv;

Button::Button(int px, int py, int sx, int sy, string text)
: Widget(px, py, sx, sy)
{
    _text = text;
    allandosag=false;
    josag=true;
}

void Button::setText(std::string text){_text=text;}

void Button::draw()
{
    gout << move_to(x, y) << color(255,255,255) << box(size_x, size_y);

    if( allandosag ) gout << color(0,0,100);
    else gout << color(0,200,0);
    gout << move_to( x + 1, y + 1) << box( size_x - 2, size_y - 2);

    if( josag )gout << color(255,255,255);
    else gout << color(255,0,0);
    gout << move_to( x +  size_x / 2 - gout.twidth(_text) / 2, y + size_y / 2 + 6)
         << text(_text);
}

void Button::handle(event ev)
{
    // ha a gomb fókuszálva van és ENTER-t ütünk, vagy felette bal egérgombbal kattintunk
    if (( inFocus && ev.keycode == key_enter) ||
        (is_selected(ev.pos_x, ev.pos_y) && ev.button == btn_left))
    {
        action(); // hajtsuk végre az akciót
    }
}

