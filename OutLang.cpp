#include "main.h"

void Out(oop &o, ofstream &ofst);
void Out(proced &p, ofstream &ofst);
int YearsOld(lang &l);
void Out(functional &f, ofstream &ofst);


void Out(lang *l, ofstream &ofst) 
{
	CheckOutFile(ofst);
	switch (l->t) 
	{
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
	
	ofst << " It is " << YearsOld(*l) << " years old." << endl;
	ofst << "\tLanguage mentioned in the Inet " << l->reference << " times.";
}