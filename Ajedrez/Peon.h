#include "Pieza.h"

class Peon : public Pieza
{
public:
	Peon(Color c);
	bool validarMovimiento(int x, int y) const override;
	char getTipo() const override;
};

