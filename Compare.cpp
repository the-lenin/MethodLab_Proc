#include "main.h"

int YearsOld(lang &l);

bool Compare(lang *first, lang *second)
{
	if (YearsOld(*first) < YearsOld(*second))
		return 1;
	else
		return 0;
}