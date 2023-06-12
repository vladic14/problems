#include "Masina.h"
class Dacia : public Masina {
public:
	Dacia();
		float GoCar(bool&, int, int) override;
	char* getname() override;
};
