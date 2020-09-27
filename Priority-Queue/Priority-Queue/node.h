

class Node
{
	int object;
	int priority;
	Node* next;


public:
	Node()
	{
		object = 0;
		priority = 0;
		next = nullptr;

	}

	void set(int object)
	{
		this->object = object;
	}

	int get()
	{
		return object;
	}

	void setpriority(int priority)
	{
		this->priority = priority;
	}

	int getpriority()
	{
		return priority;
	}

	void setnext(Node* next)
	{
		this->next = next;
	}

	Node* getnext()
	{
		return next;
	}

	~Node()
	{

	}
};