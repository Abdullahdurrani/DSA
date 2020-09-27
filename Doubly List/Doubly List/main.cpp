#include<iostream>
#include "list.h"
using namespace std;
int main()
{
	List a;

	int option;

	do {
		cout << "\n\n\t\t------------------ DOUBLY LINKED LIST ------------------ "<< endl<<endl;
		cout << "\t1.  Insertion " << endl;
		cout << "\t2.  Deletion " << endl;
		cout << "\t3.  Update " << endl;
		cout << "\t4.  Start " << endl;
		cout << "\t5.  Next " << endl;
		cout << "\t6.  Back " << endl;
		cout << "\t7.  Tail " << endl;
		cout << "\t8.  Find " << endl;
		cout << "\t9.  Get " << endl;
		cout << "\t10. Size/Length " << endl;
		cout << "\t11. Display List " << endl;
		cout << "\t12. Exit " << endl << endl;
		cout << "\n\t\tChoose an Option: ";
		cin >> option;
		cout << endl;

		switch (option)
		{

		case 1:
			cout << "\t\t------------------ Insertion ------------------" << endl<<endl;
			a.insert();
			break;

		case 2:
			cout << "\t\t------------------ Deletion ------------------" << endl << endl;
			a.del();
			break;

		case 3:
			cout << "\t\t------------------ Update ------------------" << endl << endl;
			a.update();
			break;


		case 4:
			cout << "\t\t------------------ Start ------------------" << endl << endl;
			a.start();
			break;

		case 5:
			cout << "\t\t------------------ Next ------------------" << endl << endl;
			a.next();
			break;

		case 6:
			cout << "\t\t------------------ Back ------------------" << endl << endl;
			a.back();
			break;

		case 7:
			cout << "\t\t------------------ Tail ------------------" << endl << endl;
			a.tail();
			break;

		case 8:
			cout << "\t\t------------------ Find ------------------" << endl << endl;
			a.find();
			break;

		case 9:
			cout << "\t\t------------------ Get ------------------" << endl << endl;
			a.get();
			break;

		case 10:
			cout << "\t\t------------------ Size/Length ------------------" << endl << endl;
			a.length();
			break;

		case 11:
			cout << "\t\t------------------ Display List ------------------" << endl << endl;
			a.display();
			break;

		case 12:
			cout << "\t\t------------------ EXIT ------------------" << endl << endl;
			a.exit();
			break;

		default:
			cout << "\t\t------------------ Invalid Option Inserted ------------------" << endl << endl;
			break;

		}
		cout << endl << endl;

	} while (option != 12);



	system("pause");
}