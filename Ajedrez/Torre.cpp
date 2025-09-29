#include "Torre.h"

Torre::Torre(Color c) : Pieza(c) {}

bool Torre::validarMovimiento(int x, int y) const {
	return false;
}

char Torre::getTipo() const {
	return (color == blanco) ? 'T' : 't'; // Retorna una T o t porque es una Torre
}