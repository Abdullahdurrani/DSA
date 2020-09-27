#include<iostream>
using namespace std;
#include"stack.h"
#include<stdlib.h>	



template <class T>
stack<T>::stack()
{
	cout << "\nEnter Maximum Size of array: ";
	cin >> max;
	A = new T[max];
	top = -1;
}


template <class T>
stack<T>::~stack()
{
	delete [] A;
}


template <class T>
bool stack<T>::isempty()
{
	if (top == -1)
	{
		return true;
	}
	else
		return false;
}

template <class T>
bool stack<T>::isfull()
{
	if (top == max - 1)
	{
		return true;
	}
	else
		return false;
}


template <class T>
void stack<T>::push()
{

	if (!isfull())
	{
		T val;
		cout << "\n\tEnter Value: ";
		cin >> val;
		A[++top] = val;
	}
	else
	{
		cout << "\n\tStack overflow in push !!" << endl;
	}
		
}

template <class T>
T stack<T>::pop()
{
	T x;
	if (!isempty())
	{
		cout << "\n\tSuccessfully popped "<<A[top]<<" out of the stack " << endl;
		x =  A[--top];
		return x;
	}
		else
		{
			cout << "\n\tStack underflow!! " << endl;
			return 0;
		}
}

template <class T>
T stack<T>::tos()
{	
	if (!isempty())
	{
		cout << "\n\tTOP ELEMENT IS: " << A[top] << endl;
		return A[top];
	}
	else
	{
		cout << "\n\tStack underflow!! " << endl;
		return 0;
	}		
}



template <class T>
void stack<T>::display()
{
		if (!isempty())
		{
			cout << "\n\tVALUES ARE: ";
			for (int i = 0; i <= top; i++)
			{
				cout << A[i] << " ";
			}
		}
		else
			cout << "\n\tStack is empty!! " << endl;
}



template <class T>
void stack<T>::menu()
{
	int option;

	do {
		cout << "\n1. PUSH " << endl;
		cout << "\n2. POP " << endl;
		cout << "\n3. TOS " << endl;
		cout << "\n4. display " << endl;
		cout << "\n5. back " << endl;
		cout << "\nCHOOSE AN OPTION: ";
		cin >> option;

		switch (option)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			tos();
			break;
		case 4:
			display();
			break;
		}
	} while (option != 5);
}



