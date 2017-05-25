#include "main.h"

bool Compare(lang *first, lang *second);

void Sort(container &c) {
	for (int i = 0; i < c.NUM - 1; i++) {
		list* cur = c.cont;
		for (int j = i + 1; j < c.NUM; j++) {
			if (Compare(cur->language, cur->next->language)) {
				lang *tmp = cur->language;
				cur->language = cur->next->language;
				cur->next->language = tmp;
			}
			cur = cur->next;
		}
	}
}