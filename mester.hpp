#ifndef MESTER_HPP
#define MESTER_HPP

#include <vector>
#include <string>

using namespace std;

class Mester
{
protected:
    vector<vector<int>> feladat;
    vector<vector<int>> megoldas;
    string feladat_nev;
    string megold_nev;
public:
    Mester(string _feladat_nev,string _megold_nev);
    vector<vector<int>> filebeolvas(string file_nev);
    bool oszlopban(int oszlopszam, int ertek);
    bool sorban(int sorszam, int ertek);
    bool mezoben(int mezoszam, int ertek);

    void run();
    void solve();
    void general();

};

#endif // MESTER_HPP

