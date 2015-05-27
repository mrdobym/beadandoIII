#include "graphics.hpp"
#include "application.hpp"
#include "mester.hpp"


using namespace genv;


int main()
{
    Mester jatekmester("sudoku.txt","megoldas.txt");

    jatekmester.run();

    return 0;
}
