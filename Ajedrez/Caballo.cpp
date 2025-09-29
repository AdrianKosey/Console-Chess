#include "Caballo.h"

Caballo::Caballo(Color c) : Pieza(c) {}

bool Caballo::validarMovimiento(int x, int y) const {
	return false;
}

char Caballo::getTipo() const {
	return (color == blanco) ? 'C' : 'c'; // Retorna una C o c porque es un caballo 
}