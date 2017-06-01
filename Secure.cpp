#include "main.h"


void CheckInFile(ifstream &file)
{
	if (!file)
	{
		cout << "Error. Can't open input file." << endl;
		system("pause");
		exit(1);
	}
}

void CheckInValue(ifstream &file)
{
	if (file.fail())
	{
		cout << "Error. Incorrect values. There are strange symbols in the input file or there is int or float overflow." << endl;
		system("pause");
		exit(1);
	}
}

void CheckNegative(float value)
{
	if (value < 0)
	{
		cout << "Error. Incorrect values. There are negative values." << endl;
		system("pause");
		exit(1);
	}
}

void CheckOutFile(ofstream &file)
{
	if (!file)
	{
		cout << "Error. Can't open output file." << endl;
		system("pause");
		exit(1);
	}
}

void CheckTyp(int t)
{
	if (t < 0 || t > 2)
	{
		cout << "Invalid enum type value." << endl;
		system("pause");
		exit(1);
	}
}

void CheckTypification(int t)
{
	if (t < 0 || t > 1)
	{
		cout << "Invalid enum typification value." << endl;
		system("pause");
		exit(1);
	}
}

void CheckInheritance(int t)
{
	if (t < 0 || t > 2)
	{
		cout << "Invalid enum inheritance value." << endl;
		system("pause");
		exit(1);
	}
}
