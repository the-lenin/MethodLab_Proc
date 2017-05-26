#include "main.h"

void ClearContainer(container &c) {
	list* a;
	while (c.cont != NULL && c.NUM > 0)
	{
		a = c.cont->next;
		delete c.cont;
		c.cont = a;
		--c.NUM;
	}
	c.NUM = 0;
	c.cont = NULL;
}