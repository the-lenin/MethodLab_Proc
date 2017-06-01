#include "main.h"


void Out(proced &p, ofstream &ofst) {
	CheckOutFile(ofst);
	ofst << "This is Procedural language: Invented in " << p.age;
	if(p.abstr)
		ofst << ", have abstract types of data.";
	else
		ofst << ", don't have abstract types of data.";
}
