#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "widgets.hpp"
#include <string>

using namespace std;

class Button : public Widget // gomb vezérlõje
{
public:
    Button(int px, int py, int sx, int sy, string text);
    void draw();
    void handle(genv::event ev); // eseménykezelés
    void setText(std::string text);
    bool allandosag;
    bool josag;


    std::string getText() const { return _text; }
protected:
    virtual void action() {} // akciókezelés, ez lehet rejtett

    std::string _text;
};


#endif // BUTTON_HPP
