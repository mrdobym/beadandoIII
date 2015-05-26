#include "application.hpp"
#include "szamok.hpp"
#include <sstream>
#include <fstream>

int main()
{
    Application app(600,400, "MyApp v1.2"); // példányosítjuk az alkamazást

    // létrehozzuk a vezérlőket
    string szam;
        int su_in[9][9]={
                 0,0,7   ,0,0,0    ,4,0,6,
                 8,0,0   ,4,0,0    ,1,7,0,
                 0,0,0   ,3,0,0    ,9,0,5,

                 0,0,0   ,7,0,5    ,0,0,8,
                 0,0,0   ,0,0,0    ,0,0,0,
                 4,0,0   ,2,0,8    ,0,0,0,

                 7,0,4   ,0,0,3    ,0,0,0,
                 0,5,2   ,0,0,1    ,0,0,9,
                 1,0,8   ,0,0,0    ,6,0,0
                };

        int su_out[9][9]={
                 5,3,7   ,9,1,2    ,4,8,6,
                 8,2,9   ,4,5,6    ,1,7,3,
                 6,4,1   ,3,8,7    ,9,2,5,

                 9,1,3   ,7,4,5    ,2,6,8,
                 2,8,6   ,1,3,9    ,7,5,4,
                 4,7,5   ,2,6,8    ,3,9,1,

                 7,6,4   ,8,9,3    ,5,1,2,
                 3,5,2   ,6,7,1    ,8,4,9,
                 1,9,8   ,5,2,4    ,6,3,7
                };

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            stringstream SS;
            SS << su_in[i][j];
            SS >> szam;
            if(su_in[i][j] != 0)
                {
                    Szamok* egy = new Szamok(10+i*30,10+j*30,30,30,szam,true,true,i,j);
                    app.addWidget(egy);
                }
            else if(su_in[i][j] != su_out[i][j])
                {
                    Szamok* egy = new Szamok(10+i*30,10+j*30,30,30,"",false,false,i,j);
                    app.addWidget(egy);
                }
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
