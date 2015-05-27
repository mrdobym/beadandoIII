#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "widget.hpp"
#include <string>

class Button : public Widget // gomb vezérlõje
{
public:
    Button(int px, int py, int sx, int sy, std::string text);
    bool allandosag;
    void draw();
    void handle(genv::event ev); // eseménykezelés
    void setText(std::string text);
    std::string getText() const { return _text; }

protected:
    virtual void action() {} // akciókezelés, ez lehet rejtett

    std::string _text;
};


#endif // BUTTON_HPP

