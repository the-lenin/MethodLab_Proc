#pragma once

#include "typ_atd.h"

struct oop {
	typ t;
	short age;
	
	enum inheritance { single, multiple, interf };
	inheritance a;
};
