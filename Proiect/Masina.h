#ifndef CARH
#define CARH

class Masina {
protected:
	int capacitateaCilindrica;
	int Consumul;
	int vitezaMedie[3];
	char* nume;
public:
	virtual float GoCar(bool&, int, int) = 0;
	virtual char* getname() = 0;
};
#endif
