

class Node
{
	int object;
	Node * next;
public:
	Node() 
	{
		object = 0;
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

	void setnext(Node * next)
	{
		this->next = next;
	}

	Node *getnext()
	{
		return next;
	}

	~Node()
	{

	}
};