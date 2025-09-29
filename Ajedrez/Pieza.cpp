#include "Pieza.h"

Pieza::Pieza(Color c){
	// Asignamos el color a la pieza correspondiente
	color = c;
}

Pieza::~Pieza() {

}

Color Pieza::getColor() const{ return color; }
