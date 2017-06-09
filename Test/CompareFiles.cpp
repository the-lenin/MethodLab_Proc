#include "main.h"


bool CompareFiles(ifstream &f1, ifstream &f2)
{
	string s1;
	string s2;
	int i = 0;
	while ((!f1.eof()) || (!f2.eof()))
	{
		getline(f1, s1);
		getline(f2, s2);
		if (s1 != s2)
		{
			cout << "String " << i + 1 << "don't match!\n" << s1 << "\n" << s2 << "\n";
			return false;
		}
		i += 1;
	}
	return true;
}