#include "main.h"

bool CompareContainer(container *c1, container *c2)
{

	if (c1->NUM != c2->NUM)
		return false;
	else
	{
		int n = c1->NUM;
		for (int i = 0; i < n; i++)
		{
			if (c1->cont->language->t == OOP && c2->cont->language->t == OOP)
				if ((((oop*)c1->cont->language)->age != ((oop*)c2->cont->language)->age) || (((oop*)c1->cont->language)->reference != ((oop*)c2->cont->language)->reference) || (((oop*)c1->cont->language)->a != ((oop*)c2->cont->language)->a))
					return false;
			if (c1->cont->language->t == PROCED && c2->cont->language->t == PROCED)
				if (((proced*)c1->cont->language)->abstr != ((proced*)c2->cont->language)->abstr || ((proced*)c1->cont->language)->age != ((proced*)c2->cont->language)->age || ((proced*)c1->cont->language)->reference != ((proced*)c2->cont->language)->reference)
					return false;
			if (c1->cont->language->t == FUNCTIONAL && c2->cont->language->t == FUNCTIONAL)
				if ((((functional*)c1->cont->language)->age != ((functional*)c2->cont->language)->age) || ((proced*)c1->cont->language)->reference != ((proced*)c2->cont->language)->reference || ((proced*)c1->cont->language)->abstr != ((proced*)c2->cont->language)->abstr)
					return false;
			
			c1->cont = c1->cont->next;
			c2->cont = c2->cont->next;
		}
	}
	return true;
}