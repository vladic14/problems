#include "Masina.h"
class Ford : public Masina {
public:
	Ford();
	float GoCar(bool&, int, int) override;
	char* getname() override;
};

