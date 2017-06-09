#include "main.h"

void ContainerPattern(container *c)
{
	c->NUM = 6;
	c->cont = new list;
	list* cur = c->cont;
	cur->language = new lang;
	cur->next = new list;
	((functional*)c->cont->language)->t = FUNCTIONAL;
	((functional*)c->cont->language)->lazycalc = true;
	((functional*)c->cont->language)->age = 1998;
	((functional*)c->cont->language)->reference = 354;
	((functional*)c->cont->language)->typ = functional::typification::DYNAMIC;
	cur = cur->next;

	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = true;
	((proced*)cur->language)->age = 1995;
	((proced*)cur->language)->reference = 500;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((functional*)cur->language)->t = FUNCTIONAL;
	((functional*)cur->language)->lazycalc = false;
	((functional*)cur->language)->age = 1997;
	((functional*)cur->language)->reference = 35400;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1991;
	((oop*)cur->language)->a =oop::inheritance::INTERF;
	((oop*)cur->language)->reference = 100000;
	
	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = false;
	((proced*)cur->language)->age = 1990;
	((proced*)cur->language)->reference = 20000;

	cur = cur->next;
	cur->language = new lang;
	cur->next = NULL;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1985;
	((oop*)cur->language)->a = oop::inheritance::MULTIPLE;
	((oop*)cur->language)->reference = 10500;


}

void SortedContainerPattern(container *c)
{
	c->NUM = 6;
	c->cont = new list;
	list* cur = c->cont;
	cur->language = new lang;
	cur->next = new list;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1985;
	((oop*)cur->language)->a = oop::inheritance::MULTIPLE;
	((oop*)cur->language)->reference = 10500;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = false;
	((proced*)cur->language)->age = 1990;
	((proced*)cur->language)->reference = 20000;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1991;
	((oop*)cur->language)->a = oop::inheritance::INTERF;
	((oop*)cur->language)->reference = 100000;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = true;
	((proced*)cur->language)->age = 1995;
	((proced*)cur->language)->reference = 500;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((functional*)cur->language)->t = FUNCTIONAL;
	((functional*)cur->language)->lazycalc = false;
	((functional*)cur->language)->age = 1997;
	((functional*)cur->language)->reference = 35400;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	cur = cur->next;
	cur->language = new lang;
	cur->next = NULL;
	((functional*)cur->language)->t = FUNCTIONAL;
	((functional*)cur->language)->lazycalc = true;
	((functional*)cur->language)->age = 1998;
	((functional*)cur->language)->reference = 354;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

}

