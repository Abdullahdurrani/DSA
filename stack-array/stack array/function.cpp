#include<iostream>
using namespace std;
#include "stack.h"

void stack::create()
{

	cout << "\nEnter Maximum Characters: ";
	cin >> max;

	A = new char[max];

}

void stack::push()
{
	if (isfull() == true)
	{
		cout << "\nLIST IS FULL DE ALLOCATE FIRST" << endl;

	}

	else {

		char input;
		cout << "\nEnter Character: ";
		cin >> input;

		A[++top] = input;
		
	}
	
}

int stack::pop()
{
	if (isempty() == true)
	{
		cout << "nLIST IS EMPTY! INSERT ELEMENTS FIRST " << endl;
	}

	else {
		A[top--];
		int x = A[top--];
		return x;
	}
	
}


void stack::tos()
{
	if (isempty() == true)
	{
		cout << "nLIST IS EMPTY! INSERT ELEMENTS FIRST " << endl;
	}
	else {
		cout << "\nCharacter: " << A[top] << endl;
	}
	
}

bool stack::isempty()
{
	if (top == -1) {
		return true;
	}
	else
		return false;
}

bool stack::isfull()
{
	if (top == max - 1)
	{
		return true;
	}
	else
		return false;
}


void stack::display()
{
	if (isempty() == true)
	{
		cout << "nLIST IS EMPTY! INSERT ELEMENTS FIRST " << endl;
	}
	else {
		cout << "\nCharacters: ";
		int i = 0;
		while()
		for (int i = 0; i < max; i++)
		{
			
			cout << A[i] << "\t";
		}
	}
}

void stack::deallocate()
{
	delete [] A;
	cout << "\nDEALLOCATED SUCCESSFULLY!" << endl;
}