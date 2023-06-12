#include "Mazda.h"
#include "Masina.h"
#include "Timpul.h"
#include <string>
using namespace std;

Mazda::Mazda() {
	capacitateaCilindrica = 100;
	Consumul = 6;
	vitezaMedie[Ploios] = 55;
	vitezaMedie[Senin] = 100;
		vitezaMedie[Inzapezit] = 40;
	nume = (char*)"Mazda";

}

float Mazda::GoCar(bool& b, int w, int lungimeaCircuit) {
	int viteza = vitezaMedie[w];

	float ore = capacitateaCilindrica / Consumul;
	float distanta = ore * viteza;

	b = distanta > lungimeaCircuit;
	return(ore * lungimeaCircuit / distanta);
}

char* Mazda::getname() {
	return nume;
}