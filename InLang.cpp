#include "main.h"

void In(oop &o, ifstream &ifst);
void In(proced &p, ifstream &ifst);
void In(functional &f, ifstream &ifst);

lang* In(ifstream &ifst) {
	lang *l;
	oop* o;
	proced* p;
	functional* f;
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
	case 2:
		f = new functional;
		f->t = FUNCTIONAL;
		In(*f, ifst);
		l = (lang*)f;
		return l;
		break;
	default:
		return NULL;
		break;
	}
}