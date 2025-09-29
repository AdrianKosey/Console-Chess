#pragma once
enum Color { blanco, negro };

class Pieza
{
protected:
	Color color;
public:
	Pieza(Color c);
	virtual ~Pieza();
	Color getColor() const;
	virtual bool validarMovimiento(int x, int y) const = 0; // Metodo virtual para validar los movimientos de cada pieza
	virtual char getTipo() const = 0;						// Metodo virtual oara obtener el tipo de la pieza
};

