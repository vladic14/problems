#include "Dacia.h"
#include "Renault.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"
#include <string>
using namespace std;

class Circuit {
private: 
	int lungimeCircuit;

	Masina* masina[10];
	float timpDeFinisat[10];
	bool finish[10];

	int masini;
	int timpul;
public:
	Circuit();

	void setezLungimea(int);
	void setezTimpul(int);

	void adugaMasina(Masina* c);

	void cursa();
	void afiseazaRezultateFinale();
	void afiseazaCineNuaTerminat();

   
};