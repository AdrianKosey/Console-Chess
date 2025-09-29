#include "Peon.h"

Peon::Peon(Color c) : Pieza(c) {}

bool Peon::validarMovimiento(int x, int y) const {
	return false;
}

char Peon::getTipo() const {
	return (color == blanco) ? 'P' : 'p'; // Retorna una P o p porque es un peon 
}