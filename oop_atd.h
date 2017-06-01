#pragma once

#include "typ_atd.h"

struct oop 
{
	typ t;
	short age;
	int reference;
	
	enum inheritance { SINGLE, MULTIPLE, INTERF };
	inheritance a;
};
