#include "Ford.h"
#include "Masina.h"
#include "Timpul.h"
#include <string>
using namespace std;

Ford::Ford() {
	capacitateaCilindrica = 70;
	Consumul = 5;
	vitezaMedie[Ploios] = 50;
	vitezaMedie[Senin] = 60;
	vitezaMedie[Inzapezit] = 30;
	nume = (char*)"Ford";

}

float Ford::GoCar(bool& b, int w, int lungimeaCircuit) {
	int viteza = vitezaMedie[w];

	float ore = capacitateaCilindrica / Consumul;
	float distanta = ore * viteza;

	b = distanta > lungimeaCircuit;
	return(ore * lungimeaCircuit / distanta);
}

char* Ford::getname() {
	return nume;
}