#include "Pieza.h"

class Tablero
{
private:
	Pieza* tablero[8][8];		// Una matriz de punteros a Pieza
public:
	Tablero();
	~Tablero();
	void moverPieza(int x, int y, int destX, int destY); // Recibe la posicion de la pieza y el destino final de la pieza
	void imprimirTablero();
};

