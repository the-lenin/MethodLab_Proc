#include "main.h"


void MultiMethod(container* c, ofstream &file)
{
	file << endl << "Multimethod:" << endl;
	list *temp1 = new list;
	temp1 = c->cont;
	list *temp2 = new list;
	temp2 = c->cont->next;
	while (temp1->next != NULL)
	{
		while (temp2->next != NULL)
		{
			file << endl;
			switch (temp1->language->t)
			{	
			case PROCED:
			{
				switch (temp2->language->t)
				{
				case PROCED:
				{
					file << "Procedural and Procedural:" << endl;
					break;
				}
				case OOP:
				{
					file << "Procedural and OOP:" << endl;
					break;
				}
				case FUNCTIONAL:
				{
					file << "Procedural and Functional:" << endl;
					break;
				}
				default:
				{
					file << "Unknown type" << endl;
					break;
				}
				}
				break;
			}
			case OOP:
			{
				switch (temp2->language->t)
				{
				case PROCED:
				{
					file << "OOP and Procedural:" << endl;
					break;
				}
				case OOP:
				{
					file << "OOP and OOP:" << endl;
					break;
				}
				case FUNCTIONAL:
				{
					file << "OOP and Functional:" << endl;
					break;
				}
				default:
				{
					file << "Unknown type" << endl;
					break;
				}
				}
				break;
			}
			case FUNCTIONAL:
			{
				switch (temp2->language->t)
				{
				case PROCED:
				{
					file << "Functional and Procedural:" << endl;
					break;
				}
				case OOP:
				{
					file << "Functional and OOP:" << endl;
					break;
				}
				case FUNCTIONAL:
				{
					file << "Functional and Functional:" << endl;
					break;
				}
				default:
				{
					file << "Unknown type" << endl;
					break;
				}
				}
				break;
			}
			default:
			{
				file << "Unknown type" << endl;
				break;
			}
			}
			file << "\t";
			Out(temp1->language, file);
			file << "\n\t";
			Out(temp2->language, file);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}