#pragma once
template <class T>
class queue {
private:
	T* A;
	int front;
	int rear;
	int max;
	int size;

public:
	void enqueue();
	T dequeue();
	T tos();
	int isfull();
	int isempty();
	void display();

	queue();
	~queue();
	
	
};