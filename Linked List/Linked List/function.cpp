#include<iostream>
#include"list.h"
using namespace std;

void List::insert()
{
	int num;
	Node * newnode;
	

	if (headenode == nullptr)
	{
		newnode = new Node();

		newnode->setnext(nullptr);

		cout << "Enter Number: ";
		cin >> num;
		newnode->set(num);

		headenode = newnode;
		currentnode = newnode;
		lastcurrentnode = newnode;
		size++;
		cout << "\nValue inserted Successfully!!" << endl;
	}
	else
	{
		int option;
		do {

		cout << "\n1. After the Current Node of List " << endl;
		cout << "\n2. Before the Current Node of List  " << endl;
		cout << "\n3. Menu " << endl;
		cout << "\nChoose Option: ";
		cin >> option;

		switch (option)
		{
			case 1:
				{
					newnode = new Node();
					newnode->setnext(nullptr);

					cout << "\n ************ AFTER CURRENT NODE ************" << endl;

					get();

					cout << "\n Enter Number: ";
					cin >> num;
					newnode->set(num);
					
					newnode->setnext(currentnode->getnext());
					currentnode->setnext(newnode);
					lastcurrentnode = currentnode;
					currentnode = newnode;
					size++;
					cout << "\nValue inserted Successfully!!" << endl;
					break;
				}
				
			case 2:
				{
					
					newnode = new Node();

					newnode->setnext(nullptr);

					cout << "\n ************ BEFORE CURRENT NODE ************" << endl;
					
					get();

					cout << "\n Enter Number: ";
					cin >> num;
					newnode->set(num);

					if (currentnode == headenode)
					{
						newnode->setnext(headenode);
						currentnode = newnode;
						lastcurrentnode = newnode;
						headenode = newnode;
					}
					else
					{
						newnode->setnext(currentnode);
						lastcurrentnode->setnext(newnode);
						currentnode = newnode;
					}	
					size++;
					cout << "\nValue inserted Successfully!!" << endl;				
					break;
				}
				
				
			}
		
		} while (option != 3);
		
		

	}
	
	display();
}




void List::del()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		int flag = find();

		if (flag == 1)
		{

			if (currentnode == headenode)
			{
				headenode = headenode->getnext();
				delete currentnode;
				currentnode = headenode;
				lastcurrentnode = headenode;
			}
			else if (currentnode->getnext() == nullptr)
			{
				lastcurrentnode->setnext(currentnode->getnext());
				delete currentnode;
				back();
			}

			else
			{
				lastcurrentnode->setnext(currentnode->getnext());
				delete currentnode;
				currentnode = lastcurrentnode->getnext();

			}
			cout << "\n Value deleted Successfully!" << endl;
			size--;
			display();

		}
	}
	
}




void List::update()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		int num;
		int flag = find();
		if (flag == 1)
		{
			cout << "\nEnter New Number: ";
			cin >> num;
			currentnode->set(num);
		}
		cout << "\nValue updated Successfully!!" << endl;
		display();
	}

	
}


void List::start()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		lastcurrentnode = headenode;
		currentnode = headenode;

		display();
		cout << "\n At The start of list " << endl;
		cout << "\nNumber: " << currentnode->get();
	}
	
}



void List::next()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		if (currentnode->getnext() == nullptr)
		{
			cout << "\nAlready at the last location! " << endl;
		}
		else
		{
			lastcurrentnode = currentnode;
			currentnode = currentnode->getnext();
			display();
			cout << "\nNext Number: " << currentnode->get();
		}
	}

}




void List::back()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		display();
		Node * Ltemp = headenode;
		Node * temp = headenode;

		if (currentnode == headenode)
		{
			cout << "\n Already at the first place ";
		}
		else {

			while (temp != lastcurrentnode)
			{
				Ltemp = temp;
				temp = temp->getnext();
			}
			lastcurrentnode = Ltemp;
			currentnode = temp;

			cout << "\n Current Node: " << currentnode->get()
				<< "\NLast Current: " << lastcurrentnode->get() << endl;
		}
	}
	
}


void List::tail()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		while (currentnode->getnext() != nullptr)
		{
			lastcurrentnode = currentnode;
			currentnode = currentnode->getnext();
		}
		display();
		cout << "\Last Number: " << currentnode->get();
	}
}



int List::find()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		int num;
		int flag = 0;

		cout << "\nEnter Number To find: ";
		cin >> num;

		Node * temp = headenode;
		Node * Ltemp = headenode;

		while (temp != nullptr)
		{
			if (num == temp->get())
			{
				flag = 1;
				break;
			}
			Ltemp = temp;
			temp = temp->getnext();
		}
		lastcurrentnode = Ltemp;
		currentnode = temp;

		if (flag == 1)
		{
			cout << "\nNumber Found!" << endl;
			return flag;
		}
		else
		{
			cout << "\nNumber Not found! " << endl;
			return flag;
		}
	}
}



void List::get()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		cout << "\n Current Node: " << currentnode->get() << "\t Size: " << size;
		cout << "\t Last Current Node: " << lastcurrentnode->get() << endl;

		display();
	}
}


void List::length()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{
		cout << "\nSize of list is: " << size << endl;
	}
}


void List::display()
{
	if (size == 0)
	{
		cout << "\nNo values inserted!!" << endl;
	}
	else
	{

		Node* temp;
		temp = headenode;
		cout << "\nList is:  ";
		while (temp != nullptr)
		{
			cout << temp->get() << "\t";
			temp = temp->getnext();
		}
		cout << endl;
	}
}