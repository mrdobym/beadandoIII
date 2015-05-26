#include "application.hpp"
#include "szamok.hpp"
#include "mester.hpp"
#include <sstream>
#include <fstream>

int main()
{
    Application app(600,400, "MyApp v1.2"); // példányosítjuk az alkamazást

    // létrehozzuk a vezérlőket
    string szam;
    Mester* jatekmester = new Mester();

    vector<vector<int>> feladat;
    vector<vector<int>> megoldas;

        jatekmester -> ertekbetolt(feladat,"sudoku.txt");
        jatekmester -> megoldasbetolt(megoldas,"megoldas.txt");

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            stringstream SS;
            SS << feladat[i][j];
            SS >> szam;
            if(feladat[i][j] != 0)
                {
                    Szamok* egy = new Szamok(10+i*30,10+j*30,30,30,szam,true,true,i,j);
                    app.addWidget(egy);
                }
//            else if(su_in[i][j] != su_out[i][j])
//                {
//                    Szamok* egy = new Szamok(10+i*30,10+j*30,30,30,"",false,false,i,j);
//                    app.addWidget(egy);
//                }
            else
                {
                    Szamok* egy = new Szamok(10+i*30,10+j*30,30,30,"",false,true,i,j);
                    app.addWidget(egy);
                }
        }
    }

    app.run(); // futtatjuk az alkalmazást

    return 0;
}
