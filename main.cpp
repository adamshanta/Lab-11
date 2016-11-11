#include "header.h"


int main()
{

	PersonNode *head;

	head = NULL;

	CreateList(head);

	while(head != NULL)
	{
		cout << head -> name << endl;
		cout << head -> gender << " " << head -> age;
		cout << endl << endl;
		head = head -> next;
	}





	return 0;
}




