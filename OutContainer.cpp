#include "main.h"

void Out(lang *l, ofstream &ofst);

void Out(container &c, ofstream &ofst) {
	CheckOutFile(ofst);
	ofst << "Container contains " << c.NUM	<< " elements." << endl;
	list* cur = c.cont;
	int s = 0;
	while (cur != NULL && s < c.NUM)
	{
		ofst << s + 1 << " :  ";
		Out(cur->language, ofst);
		ofst << endl;
		cur = cur->next;
		++s;
	}

}