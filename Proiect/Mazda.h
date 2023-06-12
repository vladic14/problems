#include "Masina.h"
class Mazda : public Masina {
public:
	Mazda();
	float GoCar(bool&, int, int) override;
	char* getname() override;
};
