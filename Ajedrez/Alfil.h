#include "Pieza.h"

class Alfil : public Pieza
{
public:
	Alfil(Color c);
	bool validarMovimiento(int x, int y) const override;
	char getTipo() const override;
};

