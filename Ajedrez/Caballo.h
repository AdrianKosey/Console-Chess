#include "Pieza.h"

class Caballo : public Pieza
{
public:
	Caballo(Color c);
	bool validarMovimiento(int x, int y) const override;
	char getTipo() const override;
};

