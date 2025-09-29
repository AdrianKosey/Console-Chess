#include <iostream>
#include "Pieza.h"
#include "Torre.h"
#include "Tablero.h"
using namespace std;

int main(void)
{
    /*Test
    Pieza* p = new Torre(negro);
    char tipo = p->getTipo();
    switch (p->getColor())
    {
    case blanco: cout << "Es blanca" << endl; break;
    case negro : cout << "Es negra" << endl; break;
    default:
        break;
    }
    cout << tipo << endl;*/

    //Imprimir tablero
    Tablero t;
    t.imprimirTablero();
}