#include "main.h"

void Out(oop &o, ofstream &ofst);
void Out(proced &p, ofstream &ofst);

void Out(lang *l, ofstream &ofst) {
	switch (l->t) {
	case OOP:
		Out(*((oop*)l), ofst);
		ofst << "\tLanguage mentioned in the Inet " << l->reference << " times.";
		break;
	case PROCED:
		Out(*((proced*)l), ofst);
		ofst << "\tLanguage mentioned in the Inet " << l->reference << " times.";
		break;
	default:
		ofst << "Incorrect language!" << endl;
	}
	
}