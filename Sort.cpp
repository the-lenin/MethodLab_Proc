#include "main.h"

bool Compare(lang *first, lang *second);

void Sort(container &c, bool descendingly) { // adding sorting in both orders
	for (int i = 0; i < c.NUM - 1; i++) {
		list* cur = c.cont;
		for (int j = i + 1; j < c.NUM; j++) 
		{
			if (descendingly)
			{
				if (Compare(cur->language, cur->next->language))
				{
					lang *tmp = cur->language;
					cur->language = cur->next->language;
					cur->next->language = tmp;
				}
			}
			else
			{
				if (!Compare(cur->language, cur->next->language))
				{
					lang *tmp = cur->language;
					cur->language = cur->next->language;
					cur->next->language = tmp;
				}
			}
			cur = cur->next;
		}
	}
}