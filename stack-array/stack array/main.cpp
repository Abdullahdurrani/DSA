#include<iostream>
using namespace std;
#include "stack.h"
int main()
{
	stack s;
	int option;

	do {

		cout << "------------ MENU ------------ " << endl;
		cout << "0. create " << endl;
		cout << "1. push " << endl;
		cout << "2. pop " << endl;
		cout << "3. tos " << endl;
		cout << "4. isempty " << endl;
		cout << "5. isfull " << endl;
		cout << "6. display " << endl;
		cout << "7. deallocate " << endl;
		cout << "8. exit " << endl;

		cout << "\n\t\t CHOOSE AN OPTION: ";
		cin >> option;

		switch (option)
		{
		case 0:
			s.create();
			break;
		case 1:
			s.push();
			break;

		case 2:
			s.pop();
			break;

		case 3:
			s.tos();
			break;

		case 4:
			s.isempty();
			break;

		case 5:
			s.isfull();
			break;

		case 6:
			s.display();
			break;

		case 7:
			s.deallocate();
			break;
		case 8:
			cout << "\BYE" << endl;
		}
	} while (option != 8);

	system("pause");
	
}