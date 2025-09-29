#include "Rey.h"

Rey::Rey(Color c) : Pieza(c) {}

bool Rey::validarMovimiento(int x, int y) const {
	return false;
}

char Rey::getTipo() const {
	return (color == blanco) ? 'R' : 'r'; // Retorna una R o r porque es un rey 
}