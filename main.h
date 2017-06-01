#include "oop_atd.h"
#include "proced_atd.h"
#include "lang_atd.h"
#include "container_atd.h"
#include "typ_atd.h"
#include "list_atd.h"
#include "container_atd.h"
#include "functional_atd.h"
#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>


using namespace std;


void ClearContainer(container &c);
void In(container &c, ifstream &ifst);
void Out(container &c, ofstream &ofst);
void Sort(container &c);
void OutOnlyProced(container &c, ofstream &ofst);
bool Compare(lang *first, lang *second);


void CheckInFile(ifstream &file);
void CheckInValue(ifstream &file);
void CheckNegative(float value);
void CheckOutFile(ofstream &file);
void CheckInheritance(int t);
void CheckTypification(int t);
void CheckTyp(int t);

