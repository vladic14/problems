#include <iostream>
#include "Masina.h"
#include "Timpul.h"
#include "Circuit.h"
#include <string>
using namespace std;

Circuit::Circuit() {
	masini = 0;
}

void Circuit::setezLungimea(int l) {
	lungimeCircuit = l;
}

void Circuit::setezTimpul(int w) {
	timpul = w;
}

void Circuit::adugaMasina(Masina* c) {
	masina[masini++] = c;
}

void Circuit::cursa(){
		for (int i = 0; i < masini; i++) {
			bool b = false;
			timpDeFinisat[i] = masina[i]->GoCar(b, timpul, lungimeCircuit);
			finish[i] = b;

		}
}

void Circuit::afiseazaRezultateFinale() {
	cout << "Timpul in care masinele au finisat \n";
	for (int i = 0;i < masini;i++) {
		if (finish[i]) {
			cout << masina[i]->getname() << "-" << timpDeFinisat[i] << "\n";

		}
	}
	cout << "\n";
}

void Circuit::afiseazaCineNuaTerminat() {
	cout << "Timpul in care masinele nu au finisat \n";
	for (int i = 0; i < masini;i++) {
		if (!finish[i]) {
			cout << masina[i]->getname() << "-" << timpDeFinisat[i] << " ";

		}
	}
	cout << "\n";
}
