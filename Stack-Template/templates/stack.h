#pragma once
template <class T>
class stack 
{

private:
	int top;
	T * A;	
	int max;

public:

	void push();
	T pop();
	bool isfull();
	bool isempty();

	T tos();
	void display();
	void menu();

	stack();
	~stack();

};