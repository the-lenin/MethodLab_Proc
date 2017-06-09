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
bool CompareContainer(container *c1, container *c2);
bool Compare(lang *first, lang *second);
void ContainerPattern(container *c);
void SortedContainerPattern(container *c);

void In(proced &p, ifstream &ifst);
void Out(proced &p, ofstream &ofst);

void In(oop &o, ifstream &ifst);
void Out(oop &o, ofstream &ofst);

void In(functional &f, ifstream &ifst);
void Out(functional &f, ofstream &ofst);

lang* In(ifstream &ifst);
void Out(lang *l, ofstream &ofst);
int YearsOld(lang &l);

bool CompareFiles(ifstream &f1, ifstream &f2);


void CheckInFile(ifstream &file);
void CheckInValue(ifstream &file);
void CheckNegative(float value);
void CheckOutFile(ofstream &file);
void CheckInheritance(int t);
void CheckTypification(int t);
void CheckTyp(int t);

