#include "main.h"

using namespace std;

void Out(container &c, ofstream &ofst);
void Out(lang *l, ofstream &ofst);

void OutOnlyProced(container &c, ofstream &ofst) 
{
	ofst << "Only rectangles." << endl;
	list* cur = new list;
	cur = c.cont;
	for (int i = 0; i < c.NUM; i++) 
	{
		ofst << i + 1 << ": ";
		if (cur->language->t == typ::PROCED)
			Out(cur->language, ofst);
		else
			ofst << endl;
		cur = cur->next;
	}
}