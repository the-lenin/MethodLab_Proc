#pragma once

#include "typ_atd.h"

struct functional 
{
	typ t;
	short age;

	enum typification { EXACT, DYNAMIC };
	typification typ;
	bool lazycalc;
};
