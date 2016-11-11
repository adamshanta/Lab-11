/*
 * header.h
 *
 *  Created on: Nov 9, 2016
 *      Author: ashanta0
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

enum Menu
{
	EXIT,
	CREATE,
	DISPLAY,
	SEARCH,
	REMOVE,
	CLEAR
};

struct PersonNode
{
	string 		name;
	char   		gender;
	int    		age;
	PersonNode *next;
};


void CreateList(PersonNode *&head);

#endif /* HEADER_H_ */
