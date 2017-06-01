#include "main.h"

void In(oop &o, ifstream &ifst);
void In(proced &p, ifstream &ifst);
void In(functional &f, ifstream &ifst);

lang* In(ifstream &ifst) 
{

	CheckInFile(ifst);
	if (ifst.eof())
	{
		cout << "Error. Too many shapes is specified." << endl;
		system("pause");
		exit(1);
	}

	lang *l;
	oop* o;
	proced* p;
	functional* f;
	int type;
	ifst >> type;
	CheckInValue(ifst);
	CheckTyp(type);
	if (type > 2)
	{
		cout << "Error. Incorrect values. The key can take the values 0, 1, 2." << endl;
		system("pause");
		exit(1);
	}
	switch (type)
	{
	case 0:
		o = new oop;
		o->t = OOP;
		In(*o, ifst);
		l = (lang*)o;
		break;
	case 1:
		p = new proced;
		p->t = PROCED;
		In(*p, ifst);
		l = (lang*)p;
		break;
	case 2:
		f = new functional;
		f->t = FUNCTIONAL;
		In(*f, ifst);
		l = (lang*)f;
		break;
	default:
		return NULL;
		break;
	}
	ifst >> l->age;
	CheckInValue(ifst);
	CheckNegative(l->age);
	ifst >> l->reference;
	CheckInValue(ifst);
	CheckNegative(l->reference);
	return l;
}