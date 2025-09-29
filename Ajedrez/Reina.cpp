#include "Reina.h"

Reina::Reina(Color c) : Pieza(c) {}

bool Reina::validarMovimiento(int x, int y) const {
	return false;
}

char Reina::getTipo() const {
	return (color == blanco) ? 'Q' : 'q'; // Retorna una Q o q porque es una reina 
}