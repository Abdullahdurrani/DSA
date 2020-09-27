#include"queue.cpp"
#include<iostream>
using namespace std;

int main()
{
	queue <float> queueint;
	int option;
	do {
		cout << "1. Enqueue " << endl;
		cout << "2. Dequeue " << endl;
		cout << "3. Front " << endl;
		cout << "4. Isempty " << endl;
		cout << "5. isfull " << endl;
		cout << "6. display " << endl;
		cout << "7. Exit " << endl;
		cout << "\nEnter Option: ";
		cin >> option;

		switch (option)
		{
		case 1:
			queueint.enqueue();
			break;
		case 2:
			queueint.dequeue();
			break;
		case 3:
			if (!queueint.isempty())
			{
				cout << "\n\t\tValue at front: " << queueint.tos() << endl;
			}
			else
				cout << "\n\t\tQueue undeflow " << endl;
			break;
		case 4:
			if (queueint.isempty())
			{
				cout << "\n\t\tQueue is empty " << endl;
			}
			else
				cout << "\n\t\tQueue is not empty " << endl;
			break;
		case 5:
			if (queueint.isfull())
			{
				cout << "\n\t\tqueue is full " << endl;
			}
			else
				cout << "\n\t\tQueue is not full " << endl;
			break;
		case 6:
			queueint.display();
		}
	} while (option != 7);

	system("pause");

}