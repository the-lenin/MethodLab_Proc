#include "main.h"


void In(oop &o, ifstream &ifst) {
	int inh;
	ifst >> o.age >> inh;
	switch (inh)
	{
	case 0:
		o.a = oop::inheritance::single;
		break;
	case 1:
		o.a = oop::inheritance::multiple;
		break;
	case 2:
		o.a = oop::inheritance::interf;
		break;
	default:
		break;
	}
}
