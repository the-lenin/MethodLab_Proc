#include "main.h"


void Out(functional &f, ofstream &ofst) 
{
	CheckOutFile(ofst);
	ofst << "It is Functional language: Invented in " << f.age << ", has ";
	switch (f.typ)
	{
	case 0:
		ofst << "exact";
		break;
	case 1:
		ofst << "dynamic";
		break;
	default:
		break;
	}
	ofst << " typification and ";
	if (f.lazycalc)
		ofst << "support 'lazy' calculating. ";
	else
		ofst << "don't support 'lazy' calculating. ";
}