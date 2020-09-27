#include"queue.h"
#include<iostream>
using namespace std;

void Queue::enqueue()
{
	int num,priority;

	Node* newnode = new Node(); //creates new node

	cout << "\nEnter Number: ";
	cin >> num;
									//Asks for num and its priority
	cout << "\nEnter Priority: ";
	cin >> priority;

	newnode->set(num);			//sets number in node
	newnode->setpriority(priority);			//sets priority of number in node

	if (front == nullptr)			//first checks if front is null
	{
		front = newnode;			//if its null then makes the newnode the front node
	}
	else if (newnode->getpriority() < front->getpriority())		//checks if new node has low priority than front node
	{															
		newnode->setnext(front);			//sets the next of newnode to previously fornt node
		front = newnode;					//then makes the newnode the front node
	}										//if front is set first then we will loose link with prevoius front node
					
	else {			//else happens if front is not null and newnode has priority greater than front node
		if (front->getnext() == nullptr)	//if only one node(front next is nullptr) and priority of new node is greater than front
		{
			front->setnext(newnode);		//sets next of front to newnode
		}
		else {
			Node* temp = front;			//creates a temp pointer and sets it to front to traverse through all nodes from start
			while (temp->getnext() != nullptr && newnode->getpriority() >= temp->getnext()->getpriority())	//loops breaks if reaches the end mean temp->next is nullptr and if priority of newnode is greater and equal to priority of the node in next of temp not the node which temp points but the one next of temp points to
			{
				temp = temp->getnext();		//goes to the other node if condition is true 
			}
			newnode->setnext(temp->getnext());		//if equal then temp will be the one which is of equal value
			temp->setnext(newnode);					//if lower then temp will be one node earlier mean temp will points to node before the greater value
		}							//so newnode can be placed between temp and the greater node
	}
	elements++;
}


//to remember: when priority of newnode will be equal and greater than target node then temp will be the node which is target node mean the one which is equal or the one one step lower than newnode
//and if priority is lower than target node then loop breaks and temp points to node before target node.. happens because if temp points to main target node then it will not be possible to get link with prevois node. there is no back function here for now
//so temp will point to one node before target node because it will be easier to point to next node(newnode will be between temp and target node) bcz newnode is greater than temp node but lower than target node.
//apni scance hai ALLAH kry sai ho xD

void Queue::dequeue()
{
	if (!isEmpty())
	{
		int x = front->get();
		Node* t = front;
		front = front->getnext();
		delete t;
		cout << "\nSuccessfully Deleted: " << x << endl;
		elements--;
	}
	else
		cout << "\n\tQueue is empty " << endl;
	
}

int Queue::tos()
{
	if (!isEmpty())
	{
		cout << "\nFront element is: " << front->get() << endl;
		return front->get();
	}
	else
		cout << "\n\tQueue is empty " << endl;
	
}

int Queue::isEmpty()
{
	return (front == nullptr);
}

int Queue::find()
{
	if (!isEmpty())
	{
		int num;
		int flag = 0;
		cout << "\nEnter Number to find: ";
		cin >> num;

		Node* temp = front;

		while (temp != nullptr)
		{
			if (num == temp->get())
			{
				flag = 1;
				break;
			}
			temp = temp->getnext();
		}
		if (flag == 1)
		{
			cout << "\n\tNumber Found " << endl;
			return flag;
		}
		else
		{
			cout << "\n\tNumber Not Found " << endl;
			return flag;
		}
			
	}
	else
		cout << "\n\tQueue is empty "<<endl;
	
}

void Queue::size()
{
	if (!isEmpty())
	{
		cout << "\n\tSize of Queue is: "<<elements<<endl;
	}
	else
		cout << "\n\tQueue is empty"<<endl;
}

void Queue::display()
{
	if (!isEmpty())
	{
		Node* Temp = new Node();
		Temp = front;
		cout << "\nValues	Priority\n";
		while (Temp != nullptr)
		{
			cout << Temp->get() <<"\t"<<Temp->getpriority();
			Temp = Temp->getnext();
			cout << endl;
		}
		cout << endl << endl;
	}
	else
		cout << "\n\tQueue is empty!! " << endl;

}

void Queue::exit()
{
	cout << "\t\t\tALLAH HAFIZ " << endl;
}