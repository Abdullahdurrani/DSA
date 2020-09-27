#pragma once

class stack {

	char * A;
	int top;
	int max;


public:
	void create();
	void push();
	int  pop();
	bool isempty();
	bool isfull();
	void display();
	void tos();
	void deallocate();

	stack()
	{
		A = nullptr;
		top = -1;
	}

	~stack()
	{

	}
};