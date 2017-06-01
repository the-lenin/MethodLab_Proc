#include "main.h"


void In(proced &p, ifstream &ifst) {
	ifst >> p.abstr;
	CheckInValue(ifst);
	CheckNegative(p.abstr);
}
