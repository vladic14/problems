#include "Renault.h"
#include "Masina.h"
#include "Timpul.h"
#include <string>
using namespace std;

Renault::Renault() {
	capacitateaCilindrica = 70;
	Consumul = 3;
	vitezaMedie[Ploios] = 66;
	vitezaMedie[Senin] = 75;
	vitezaMedie[Inzapezit] = 40;
	nume = (char*)"Renault";

}

float Renault::GoCar(bool& b, int w, int lungimeaCircuit) {
	int viteza = vitezaMedie[w];

	float ore = capacitateaCilindrica / Consumul;
	float distanta = ore * viteza;

	b = distanta > lungimeaCircuit;
	return(ore * lungimeaCircuit / distanta);
}

char* Renault::getname() {
	return nume;
}