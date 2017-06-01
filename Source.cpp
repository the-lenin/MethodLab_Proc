#include "main.h"



void main(int arc, char* argv[]) 
{
	string filein = argv[1], fileout = argv[2];
	
	if (arc != 3)
	{
		cout << "Error. Incorrect command!" << endl;
		return;
	}

	ifstream fin(argv[1]);
	CheckInFile(fin);
	fin.seekg(0, std::ios::end);
	int fileSize = fin.tellg();
	fin.seekg(0, std::ios::beg);
	if (fileSize == 0)
	{
		cout << "Error. Input file is empty." << endl;
		system("pause");
		exit(0);
	}
	
	cout << "Start" << endl;
	container c;
	ClearContainer(c);
	In(c, fin);

	ofstream fout(argv[2]);
	CheckOutFile(fout);

	fout << "Filled container. " << endl;
	Sort(c);
	fout << "Container sorted." << endl;
	Out(c, fout);
	OutOnlyProced(c, fout);
	ClearContainer(c);
	fout << "Empty container. " << endl;
	Out(c, fout);
	cout << "Stop" << endl;
}