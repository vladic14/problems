#include "Masina.h"
class Mercedes : public Masina {
public:
	Mercedes();
		float GoCar(bool&, int, int) override;
	char* getname() override;
};

