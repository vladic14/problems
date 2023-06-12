#include <iostream>
#include <string>
#include "Masina.h"
#include "Timpul.h"
#include "Circuit.h"
#include <string>
using namespace std;

int main() {
	Circuit c;
	c.setezLungimea(100);
	c.setezTimpul(Timpul::Ploios);
	c.adugaMasina(new Dacia());
	c.adugaMasina(new Ford());
	c.adugaMasina(new Mercedes());
	c.adugaMasina(new Renault());
	c.adugaMasina(new Mazda());
	c.cursa();
	c.afiseazaRezultateFinale();
	c.afiseazaCineNuaTerminat();


	return 0;


}