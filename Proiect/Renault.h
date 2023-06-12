#include "Masina.h"
class Renault : public Masina {
public:
	Renault();
	float GoCar(bool&, int, int) override;
	char* getname() override;
};
