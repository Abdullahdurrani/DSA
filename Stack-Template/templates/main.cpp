#include"stack.cpp"
#include<iostream>
using namespace std;

int main()
{
	int option;

	do{
	cout << "1. int " << endl;
	cout << "2. char " << endl;
	cout << "3. Exit " << endl;
	cout << "\n\tEnter Option: ";
	cin >> option;
	
	if (option == 1)
	{
		stack<int> stackint;
		stackint.menu();
	}
	else if (option == 2)
	{
		stack<char> stackchar;
		stackchar.menu();
	}
	else if (option == 3)
	{
		cout << "\nALLAH HAFIZ" << endl;
	}
	else
	{
		cout << "\n\tWrong Input " << endl;
	}

	} while (option != 3);

	system("pause");
}