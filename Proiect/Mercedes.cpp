#include "Mercedes.h"
#include "Masina.h"
#include "Timpul.h"
#include <string>
using namespace std;

Mercedes::Mercedes() {
	capacitateaCilindrica = 120;
	Consumul = 10;
	vitezaMedie[Ploios] = 140;
	vitezaMedie[Senin] = 170;
	vitezaMedie[Inzapezit] = 60;
	nume = (char*)"Mercedes";

}

float Mercedes::GoCar(bool& b, int w, int lungimeaCircuit) {
	int viteza = vitezaMedie[w];

	float ore = capacitateaCilindrica / Consumul;
	float distanta = ore * viteza;

	b = distanta > lungimeaCircuit;
	return(ore * lungimeaCircuit / distanta);
}

char* Mercedes::getname() {
	return nume;
}