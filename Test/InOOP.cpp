#include "main.h"


void In(oop &o, ifstream &ifst) 
{
	int inh;
	ifst >> inh;
	CheckInValue(ifst);
	CheckInheritance(inh);
	switch (inh)
	{
	case 0:
		o.a = oop::inheritance::SINGLE;
		break;
	case 1:
		o.a = oop::inheritance::MULTIPLE;
		break;
	case 2:
		o.a = oop::inheritance::INTERF;
		break;
	default:
		break;
	}
}
