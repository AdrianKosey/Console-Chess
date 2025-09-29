#include "Pieza.h"

class Reina : public Pieza
{
public:
	Reina(Color c);
	bool validarMovimiento(int x, int y) const override;
	char getTipo() const override;
};

