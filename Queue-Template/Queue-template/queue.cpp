#include"queue.h"
#include<iostream>
using namespace std;
#include<stdlib.h>	


template <class T>
queue<T>::queue()
{
	front = -1;
	rear = -1;
	size = 0;
	max = 0;
	cout << "\n\tEnter the maximum queue size: ";
	cin >> max;

	A = new T[max];
}

template <class T>
queue<T>::~queue()
{
	delete[] A;
}

template <class T>
int queue<T>::isempty()
{
	if (size == 0)
	{
		return 1;
	}
	else
		return 0;
}
template <class T>
int queue<T>::isfull()
{
	if (size == max)
	{
		return 1;
	}
	else
		return 0;
}
template <class T>
void queue<T>::enqueue()
{

	if (isfull())
	{
		cout << "\n\t\tQueue overflow " << endl;
		return;
	}
	else if (isempty())
	{
		front = rear = 0;
	}
	else
	{
		rear = (rear + 1) % max;
	}
	
	T num;
	cout << "\n\tEnter number: ";
	cin >> num;
	A[rear] = num;
	size++;
	cout << "\n\t\tNumber added successfully " << endl;
}

template <class T>
T queue<T>::dequeue()
{
	if (isempty())
	{
		cout << "\n\t\tQueue underflow" << endl;
		return 0;
	}
	else if (front == rear) {

		rear = front = -1;
		size = 0;
		cout << "\n\t\tNumber dequeued successfully " << endl;
	}
	else {
		cout << "\nNumber dequeued: " << A[front] << endl;
		front = (front + 1) % max;
		size--;
		cout << "\n\t\tNumber dequeued successfully " << endl;
	}
}

template <class T>
T queue<T>::tos()
{
	if (!isempty())
	{
		return A[front];
	}
	else
		return 0;
}
template <class T>
void queue<T>::display()
{
	if (!isempty())
	{
		cout << "\n\t\tNumbers: ";
		for (int i = 0; i < size; i++)
		{
			int num = (front + i) % max;
			cout << A[num] << " ";
		}
		cout << endl;
	}
	else
		cout << "\n\t\tQueue undeflow " << endl;
}

