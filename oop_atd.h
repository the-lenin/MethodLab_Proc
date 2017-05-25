#pragma once

#include "typ_atd.h"

struct oop {
	typ t;
	short age;
	int reference;
	
	enum inheritance { single, multiple, interf };
	inheritance a;
};
