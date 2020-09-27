#include"node.h"
class Queue
{
	Node* front;	// headnode/firstnode 
	int elements;
public:

	Queue()
	{
		front = nullptr;
		elements = 0;
	}
	void enqueue();
	void dequeue();
	int tos();
	int isEmpty();
	void display();
	int find();
	void size();
	void exit();

	~Queue() {

	}
};
