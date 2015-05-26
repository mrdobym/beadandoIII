#include "mester.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

void Mester::ertekbetolt(vector<vector<int>> matrix,string fajl)
{
    ifstream f;
    f.open(fajl.c_str());

    if(f.good())
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int t;
                f >> t >> ws;
                matrix[i][j] = t;
            }
        }
    }
}

void Mester::megoldasbetolt(vector<vector<int>> matrix2,string fajl2)
{
    ifstream f2;
    f2.open(fajl2.c_str());

    if(f2.good())
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int t;
                f2 >> t >> ws;
                matrix2[i][j] = t;
            }
        }
    }
}

bool Mester::oszlopban(int oszlop, int szam)
{
    for(int i=0;i<9;i++)
    {
        int szamlalo=0;
        if(feladat[oszlop][i]==szam) szamlalo++;
        if(szamlalo>1) return false;
    }
}

bool Mester::sorban(int sor, int szam)
{
    for(int i=0;i<9;i++)
    {
        int szamlalo=0;
        if(feladat[i][sor]==szam) szamlalo++;
        if(szamlalo>1) return false;
    }
}

//bool Mester::mezoben(int mezo, int szam)
//{
//    for(int i=0;i<3;i++)
//    {
//        for(int j=0;j<3;j++)
//        {
//            int szamlalo=0;
//            if(feladat[oszlop][i]==szam) szamlalo++;
//            if(szamlalo>1) return false;
//        }
//    }
//}

//void solve()
//{
//    feladat = megoldas;
//}
