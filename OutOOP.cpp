#include "main.h"


void Out(oop &o, ofstream &ofst) {
	CheckOutFile(ofst);
	ofst << "It is OOP language: Invented in " << o.age << ", has ";
	switch (o.a)
	{
	case 0:
		ofst << "single";
		break;
	case 1:
		ofst << "multiple";
		break;
	case 2:
		ofst << "interface";
		break;
	default:
		break;
	}
	ofst << " inharitance.";
}