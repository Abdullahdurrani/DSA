#include<iostream>
#include"list.h"
#include<string>
using namespace std;


void List::insertbefore()
{
	int num;
	string name;
	Node * newnode;

	newnode = new Node();
	newnode->setnext(nullptr);
	do {
		cout << "\n\tEnter Number: ";
		cin >> num;
		newnode->set(num);
		if (num > 5)
		{
			cout << "\nError Insert between 1 to 5 numbers " << endl;
		}
		else {
			cout << "\n\tEnter Name: ";

			cin.ignore();
			getline(cin, name);
			newnode->setname(name);

			if (currentnode == headenode)
			{
				newnode->setnext(headenode);
				newnode->setprev(nullptr);
				headenode->setprev(newnode);

				currentnode = newnode;
				headenode = newnode;
			}
			else
			{
				newnode->setnext(currentnode);
				newnode->setprev(currentnode->getprev());
				(currentnode->getprev())->setnext(newnode);
				currentnode->setprev(newnode);


				currentnode = newnode;
			}

			size++;

			cout << "\n\n\t\t---------- Value inserted Successfully ----------" << endl << endl;
			break;
		}
	} while (num <= 5);



}


void List::insertafter()
{
	int num;
	string name;
	Node * newnode;
	newnode = new Node();

	do {
		cout << "\n\tEnter Number: ";
		cin >> num;
		newnode->set(num);
		if (num > 5)
		{
			cout << "\nError Insert between 1 to 5 numbers " << endl;
		}
		else {
			cout << "\n\tEnter Name: ";

			cin.ignore();
			getline(cin, name);
			newnode->setname(name);

			newnode->setnext(currentnode->getnext());
			newnode->setprev(currentnode);

			if (currentnode->getnext() != nullptr)
			{
				(currentnode->getnext())->setprev(newnode);
			}

			currentnode->setnext(newnode);


			currentnode = newnode;

			size++;

			cout << "\n\n\t\t---------- Value inserted Successfully ----------" << endl << endl;
			break;
		}
	} while (num <= 5);


}

void List::insert()
{
	int num;
	string name;
	Node * newnode;


	if (headenode == nullptr)
	{
		newnode = new Node();

		newnode->setnext(nullptr);
		newnode->setprev(nullptr);

		do {
			cout << "\n\tEnter Number: ";
			cin >> num;
			newnode->set(num);
			if (num > 5)
			{
				cout << "\nError Insert between 1 to 5 numbers " << endl;
			}
			else {
				cout << "\n\tEnter Name: ";
				cin.ignore();
				getline(cin, name);
				newnode->setname(name);

				headenode = newnode;
				currentnode = newnode;

				size++;

				cout << "\n\n\t\t---------- Value inserted Successfully ----------" << endl << endl;
				break;
			}
		} while (num <= 5);


	}
	else
	{
		int option;
		int op;
		/*	do {*/

		cout << "\n\t1. By Location " << endl;
		cout << "\n\t2. By Value  " << endl;
		/*	cout << "\n\t3. Menu " << endl;*/
		cout << "\n\n\tChoose Option: ";
		cin >> option;

		switch (option)
		{
		case 1:
		{
			/*do{*/

			cout << "\n\t---------- BY LOCATION ----------" << endl;
			cout << "\n\n\t1. After The current location " << endl;
			cout << "\n\n\t2. Before The current location " << endl;
			/*cout << "\n\t3. Menu " << endl;*/
			cout << "\n\n\tChoose Option: ";
			cin >> op;

			switch (op)
			{
			case 1:
			{
				cout << "\n\t---------- AFTER CURRENT LOCATION ----------" << endl;
				insertafter();
				break;
			}
			case 2:
			{
				cout << "\n\t---------- BEFORE CURRENT LOCATION ----------" << endl;
				insertbefore();
				break;
			}


			}
			/*} while (op != 3);*/

			break;
		}

		case 2:
		{
			/*do {*/
			cout << "\n\t---------- BY VALUE ----------" << endl;
			cout << "\n\n\t1. After The Value " << endl;
			cout << "\n\n\t2. Before The Value" << endl;
			/*		cout << "\n\t3. Menu " << endl;*/
			cout << "\n\n\tChoose Option: ";
			cin >> op;

			switch (op)
			{
			case 1:
			{
				cout << "\n\t---------- AFTER THE VALUE ----------" << endl;
				int flag = find();
				if (flag == 1)
				{
					insertafter();
				}
				break;
			}

			case 2:
			{
				cout << "\n\t---------- BEFORE THE VALUE ----------" << endl;
				int flag = find();
				if (flag == 1)
				{
					insertbefore();

				}
				break;
			}
			}
			/*} while (op != 3);*/

			break;
		}


		}

		/*} while (option != 3);*/



	}

}




void List::del()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
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

			}
			else if (currentnode->getnext() == nullptr)
			{
				Node * t = currentnode;
				(currentnode->getprev())->setnext(currentnode->getnext());
				currentnode = currentnode->getprev();
				delete t;

			}

			else
			{
				(currentnode->getnext())->setprev(currentnode->getprev());
				(currentnode->getprev())->setnext(currentnode->getnext());
				Node * t = currentnode;
				currentnode = currentnode->getprev();

				delete t;

			}
			cout << "\n\n\t\t---------- Value deleted Successfully ----------" << endl << endl;
			size--;


		}
	}

}




void List::update()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{
		string name;
		int flag = find();
		if (flag == 1)
		{
			cout << "\n\tEnter New name: ";

			getline(cin, name);
			currentnode->setname(name);


		}
		cout << "\n\n\t\t---------- Value updated Successfully ----------" << endl << endl;

	}


}


void List::start()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{
		currentnode = headenode;


		cout << "\n At The start of list " << endl;
		cout << "\nNumber: " << currentnode->get() << "\tName: " << currentnode->getname() << endl;
	}

}



void List::next()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{
		if (currentnode->getnext() == nullptr)
		{
			cout << "\n\n\t\t---------- Already At the Last Location ----------" << endl;
		}
		else
		{

			currentnode = currentnode->getnext();

			cout << "\nNumber: " << currentnode->get() << "\tName: " << currentnode->getname() << endl;
		}
	}

}




void List::back()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{



		if (currentnode == headenode)
		{
			cout << "\n\n\t\t---------- Already At the First Location ----------" << endl;
		}
		else {

			currentnode = currentnode->getprev();

			cout << "\nNumber: " << currentnode->get() << "\tName: " << currentnode->getname() << endl;
		}
	}

}


void List::tail()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{
		while (currentnode->getnext() != nullptr)
		{

			currentnode = currentnode->getnext();
		}

		cout << "\nNumber: " << currentnode->get() << "\tName: " << currentnode->getname() << endl;
	}
}



int List::find()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{
		string name;
		int flag = 0;

		Node * temp = headenode;
		cout << "\n\tEnter Name To find: ";
		cin.ignore();
		getline(cin, name);

		while (temp != nullptr)
		{
			if (name == temp->getname())
			{
				flag = 1;
				break;
			}
			temp = temp->getnext();
		}

		currentnode = temp;

		if (flag == 1)
		{
			cout << "\n\n\t\t--------- Name Found ---------" << endl;
			return flag;
		}
		else
		{
			cout << "\n\n\t\t--------- Name Not found ---------" << endl;
			return flag;
		}
	}
}



void List::get()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{
		cout << "\nNumber: " << currentnode->get() << "\tName:" << currentnode->getname() << "\tSize: " << size;

	}
}


void List::length()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{
		cout << "\n\tSize of list is: " << size << endl;
	}
}


void List::display()
{
	if (size == 0)
	{
		cout << "\n\n\t\t---------- No Value inserted ----------" << endl;
	}
	else
	{

		Node* temp;
		temp = headenode;
		/*cout << "\nList is:  ";
		while (temp != nullptr)
		{
		cout << temp->get() << "\t";
		temp = temp->getnext();
		}
		cout << endl;
		temp = headenode;
		cout << "\nName: ";
		while (temp != nullptr)
		{
		cout << temp->getname() << "\t";
		temp = temp->getnext();
		}*/
		while (temp != nullptr)
		{
			cout << "\n\tNumber: " << temp->get() << "\tName: " << temp->getname() << endl;
			temp = temp->getnext();
		}


	}
}

void List::exit()
{
	cout << "\n\n\t\t----------- ALLAH HAFIZ ------------" << endl;
}