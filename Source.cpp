#include "main.h"



void main(int arc, char* argv[]) {

	string filein = argv[1], fileout = argv[2];
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	
	cout << "Start" << endl;
	container c;
	ClearContainer(c);
	In(c, fin);
	fout << "Filled container. " << endl;
	Out(c, fout);
	OutOnlyProced(c, fout);
	ClearContainer(c);
	fout << "Empty container. " << endl;
	Out(c, fout);
	cout << "Stop" << endl;
}