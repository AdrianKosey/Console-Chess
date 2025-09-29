#include "Alfil.h"

Alfil::Alfil(Color c) : Pieza(c) {}

bool Alfil::validarMovimiento(int x, int y) const {
	return false;
}

char Alfil::getTipo() const {
	return (color == blanco) ? 'A' : 'a'; // Retorna una A o a porque es una Alfil 
}