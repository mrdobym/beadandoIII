#include "mester.hpp"
#include "application.hpp"
#include "button.hpp"
#include "button_szam.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>


using namespace std;

Mester::Mester(string _feladat_nev, string _megold_nev) : feladat_nev(_feladat_nev), megold_nev(_megold_nev){}

Application app(300,300, "Sudoku");

vector<vector<int>> Mester::filebeolvas(string file_nev)
{
    vector<vector<int>> matrix;
    ifstream file(file_nev.c_str());

    for(int i=0; i<9; i++)
    {
        vector<int> temp;
        for(int j=0; j<9; j++)
        {
            int t = 0;
            temp.push_back(t);
        }
        matrix.push_back(temp);
    }

    //cout << matrix.size();

    if(!file.good())
    {
        cerr << "Szar a beolvasas!" << endl;
    }
    else
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int t;
                file >> t >> ws;
                matrix[i][j] = t;
            }
        }
    }
    return matrix;
}

bool Mester::oszlopban(int oszlop, int szam)
{
    for(int i=0;i<9;i++)
    {
        int szamlalo=0;
        if(feladat[oszlop][i]==szam) szamlalo++;
        if(szamlalo>1) return false;
    }
    return true;
}

bool Mester::sorban(int sor, int szam)
{
    for(int i=0;i<9;i++)
    {
        int szamlalo=0;
        if(feladat[i][sor]==szam) szamlalo++;
        if(szamlalo>1) return false;
    }
    return true;
}

void Mester::run()
{
    vector<vector<int>> feladatok;
    string szam;
    int szamocska;
    feladatok = filebeolvas(feladat_nev);

    //cout << feladatok[0][0];

//    ButtonSzam* egy = new ButtonSzam(10,50,40,40,"1",1,true);
//
//    app.addWidget(egy);

      for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            stringstream ss;
            szamocska = feladatok[i][j];
            ss << szamocska;
            szam = ss.str();

            if(feladatok[i][j] != 0)
                {
                    ButtonSzam* egy = new ButtonSzam(10+i*30,10+j*30,30,30,szam,szamocska,true);
                    app.addWidget(egy);
                }
            else
                {
                    ButtonSzam* egy = new ButtonSzam(10+i*30,10+j*30,30,30,"",szamocska,false);
                    app.addWidget(egy);
                }
        }
    }

    app.run();
}
