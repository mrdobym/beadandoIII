#ifndef SZAMOK_HPP
#define SZAMOK_HPP

#include "widgets.hpp"
#include "button.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
using namespace genv;

class Szamok : public Button // gomb vezérlõje
{
public:
    Szamok(int px, int py, int sx, int sy, string text, bool allando, bool joszam, int x_hely, int y_hely)
     : Button(px, py, sx, sy, text)
     {
     text_ = text;
     allando_ = allando;
     allandosag = allando;
     josag = joszam;
     joszam_ = joszam;
     x_hely_ = x_hely;
     y_hely_ = y_hely;
     }

protected:
    void action() // módosítás akciója
    {
        if(!allando_){
        stringstream ss;
        ss << _text;
        ss >> szam;

            szam++;

        stringstream SS;
            SS << szam;
            SS >> text_;
            setText(text_);
            cout << szam;
        }
    }

    bool allando_;
    bool joszam_;
    string text_;
    int szam;
    int x_hely_;
    int y_hely_;


};
#endif // SZAMOK_HPP
