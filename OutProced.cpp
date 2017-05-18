#include "main.h"


void Out(proced &p, ofstream &ofst) {
	ofst << "This is Procedural language: Invented in " << p.age;
	if(p.abstr)
		ofst << ", have abstract types of data." << endl;
	else
		ofst << ", don't have abstract types of data." << endl;
}
