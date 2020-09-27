
#include<iostream>
using namespace std;

class Node
{

private:

	int object;
	string name;
	Node * next;
	Node * prev;

public:

	Node()
	{
		object = 0;
		name = "NULL";
		next = nullptr;
		prev = nullptr;
	}

	void set(int object)
	{
		this->object = object;
	}

	int get()
	{
		return object;
	}

	void setnext(Node * next)
	{
		this->next = next;
	}

	Node *getnext()
	{
		return next;
	}

	void setprev(Node * prev)
	{
		this->prev = prev;
	}

	Node *getprev()
	{
		return prev;
	}

	void setname(string name)
	{
		this->name = name;
	}

	string getname()
	{
		return name;
	}

	~Node()
	{

	}
};