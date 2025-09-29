#include "Pieza.h"

class Torre : public Pieza
{
public:
	Torre(Color c);
	bool validarMovimiento(int x, int y) const override;
	char getTipo() const override;
};

