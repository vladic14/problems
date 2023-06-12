#include "Dacia.h"
#include "Masina.h"
#include "Timpul.h"
#include <string>
using namespace std;

Dacia::Dacia() {
	capacitateaCilindrica = 54;
	Consumul = 20;
	vitezaMedie[Ploios] = 30;
	vitezaMedie[Senin] = 50;
	vitezaMedie[Inzapezit] = 20;
	nume = (char*)"Dacia";

}

float Dacia::GoCar(bool& b, int w, int lungimeaCircuit) {
	int viteza = vitezaMedie[w];

	float ore = capacitateaCilindrica / Consumul;
	float distanta = ore * viteza;

	b = distanta > lungimeaCircuit;
	return(ore * lungimeaCircuit / distanta);
}

char* Dacia::getname() {
	return nume;
}