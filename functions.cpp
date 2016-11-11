#include "header.h"

void CreateList(PersonNode *&head)
{
	ifstream inFile;

	inFile.open("InputFile.txt");

	PersonNode *perPtr;
	PersonNode *searchPtr;
	bool        found;

	perPtr = new PersonNode;

	while(inFile && perPtr != NULL)
	{
		if(head == NULL || head -> name[0] > perPtr -> name[0])
		{
			getline(inFile, perPtr -> name);
			inFile.get(perPtr -> gender);
			inFile >> perPtr -> age;
			inFile.ignore(1000, '\n');

			perPtr -> next = head;
			head = perPtr;
			perPtr = new PersonNode;
		}
		else
		{
			getline(inFile, perPtr -> name);
			inFile.get(perPtr -> gender);
			inFile.ignore(1000, '\n');
			inFile >> perPtr -> age;
			inFile.ignore(1000, '\n');

			searchPtr = head;
			while (searchPtr -> next != NULL && !found)
			{
				if(searchPtr -> next -> name[0] > perPtr -> name[0])
				{
					found = true;
				}
				else
				{
					searchPtr = searchPtr -> next;
				}
			}

				perPtr -> next = searchPtr -> next;
				perPtr = NULL;
				perPtr = new PersonNode;
		}
	}

	delete perPtr;
	delete searchPtr;

	inFile.close();
}



