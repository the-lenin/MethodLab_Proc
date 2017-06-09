#include "main.h"

void Out(container &c, ofstream &ofst);
void Out(lang *l, ofstream &ofst);

void OutOnlyProced(container &c, ofstream &ofst) 
{
	CheckOutFile(ofst);
	ofst << "Only procedural." << endl;
	list* cur = new list;
	cur = c.cont;
	for (int i = 0; i < c.NUM; i++) 
	{
		ofst << i + 1 << ": ";
		if (cur->language->t == typ::PROCED)
		{
			Out(cur->language, ofst);

			ofst << endl;
		}
		else
			ofst << endl;
		cur = cur->next;
	}
}