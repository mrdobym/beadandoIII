#ifndef MESTER_HPP
#define MESTER_HPP

#include <vector>
#include <string>

using namespace std;

class Mester{
protected:
    vector<vector<int>> feladat;
    vector<vector<int>> megoldas;
public:
    void ertekbetolt(vector<vector<int>> matrix,string fajl);
    void megoldasbetolt(vector<vector<int>> matrix2,string fajl2);
    bool oszlopban(int oszlopszam, int ertek);
    bool sorban(int sorszam, int ertek);
    bool mezoben(int mezoszam, int ertek);

    void solve();
    void general();

};

#endif // MESTER_HPP
