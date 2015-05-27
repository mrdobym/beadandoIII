#ifndef BUTTON_SZAM_HPP
#define BUTTON_SZAM_HPP

#include "button.hpp"
#include <sstream>

using namespace std;

class ButtonSzam : public Button // gomb vezérlõje
{
public:
    ButtonSzam(int px, int py, int sx, int sy, std::string text, int szam, bool allando)
     : Button(px, py, sx, sy, text)
    {
    text_ = text;
    szam_ = szam;
    allando_ = allando;
    allandosag = allando;
    }

protected:
    void action() // módosítás akciója
    {
        if(szam_<9 && !allando_)szam_++;
        else if(!allando_) szam_=1;
        stringstream SS;
            SS << szam_;
            SS >> text_;
            setText(text_);
    }

    string text_;
    int szam_;
    bool allando_;

};


#endif // BUTTON_SZAM_HPP


