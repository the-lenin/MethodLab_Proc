#include "main.h"


void In(functional &f, ifstream &ifst) {
	int typific;
	ifst >> f.age >> typific >> f.lazycalc;
	switch (typific)
	{
	
	case 1:
		f.typ = functional::typification::DYNAMIC;
		break;
	case 0:
		f.typ = functional::typification::EXACT;
		break;
	default:
		break;
	}
}