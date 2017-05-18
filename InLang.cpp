#include "main.h"

void In(oop &o, ifstream &ifst);
void In(proced &p, ifstream &ifst);

lang* In(ifstream &ifst) {
	lang *l;
	oop* o;
	proced* p;
	int type;
	ifst >> type;
	switch (type)
	{
	case 0:
		o = new oop;
		o->t = OOP;
		In(*o, ifst);
		l = (lang*)o;
		return l;
		break;
	case 1:
		p = new proced;
		p->t = PROCED;
		In(*p, ifst);
		l = (lang*)p;
		return l;
		break;
	default:
		return NULL;
		break;
	}
}