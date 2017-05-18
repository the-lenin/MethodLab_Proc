#include "main.h"

lang* In(ifstream &ifst);

void In(container &c, ifstream &ifst) {
	list* cur = c.cont;
	if (c.cont == NULL)
	{
		c.cont = new list;
		cur = c.cont;
	}
	else
	{
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new list;
		cur = cur->next;
	}
	list* prev = cur;
	while (!ifst.eof()) 
	{

		if ((cur->language = In(ifst)) != 0)
		{
			++c.NUM;
			prev = cur;
			cur->next = new list;
			cur = cur->next;
		}
	}
	prev->next = NULL;
}