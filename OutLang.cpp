#include "main.h"

void Out(oop &o, ofstream &ofst);
void Out(proced &p, ofstream &ofst);
void Out(functional &f, ofstream &ofst);

void Out(lang *l, ofstream &ofst) {
	switch (l->t) {
	case OOP:
		Out(*((oop*)l), ofst);
		break;
	case PROCED:
		Out(*((proced*)l), ofst);
		break;
	case FUNCTIONAL:
		Out(*((functional*)l), ofst);
		break;
	default:
		ofst << "Incorrect language!" << endl;
	}
	
}