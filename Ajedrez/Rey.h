#include "Pieza.h"

class Rey : public Pieza
{
public:
	Rey(Color c);
	bool validarMovimiento(int x, int y) const override;
	char getTipo() const override;

};

