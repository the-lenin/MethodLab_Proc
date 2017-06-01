#include "main.h"


void In(functional &f, ifstream &ifst) 
{
	int typific;
	ifst >> typific;
	CheckInValue(ifst);
	CheckNegative(typific);
	if (typific > 1)
	{
		cout << "Error. Incorrect values. Typification can be 0 or 1." << endl;
		system("pause");
		exit(1);
	}
	ifst >> f.lazycalc;
	CheckInValue(ifst);
	CheckNegative(f.lazycalc);
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