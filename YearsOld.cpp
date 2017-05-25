#include "main.h"
#include <time.h>

int YearsOld(lang &l)
{
	time_t t;
	struct tm *n;
	time(&t);
	n = localtime(&t);
	int years = n->tm_year - l.age + 1900;
	return years;
}