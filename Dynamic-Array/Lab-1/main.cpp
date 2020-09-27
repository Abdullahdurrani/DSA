#include<iostream>
#include "list.h"
using namespace std;
int main()
{
	List a;

	int option;
	/*int m;*/

	do {

		

		a.menu();
		cout << "Choose an Option: ";
		cin >> option;
		cout << endl;

		switch (option)
		{
		case 1:
			cout << "\t\t************* Create List **************" << endl;
			a.createlist();
			break;

		case 2:
			cout << "\t\t************* Insertion **************" << endl;
			a.insert();
			break;

		case 3:
			cout << "\t\t************* Deletion **************" << endl;
			a.del();
			break;

		case 4:
			cout << "\t\t************* Update **************" << endl;
			a.update();
			break;

		case 5:
			cout << "\t\t************* Start **************" << endl;
			a.start();
			break;

		case 6:
			cout << "\t\t************* Next **************" << endl;
			a.next();
			break;

		case 7:
			cout << "\t\t************* Back **************" << endl;
			a.back();
			break;

		case 8:
			cout << "\t\t************* Tail **************" << endl;
			a.tail();
			break;

		case 9:
			cout << "\t\t************* Find **************" << endl;
			a.find();
			break;

		case 10:
			cout << "\t\t************* Copy **************" << endl;
			a.copy();
			break;

		case 11:
			cout << "\t\t************* Get **************" << endl;
			a.get();
			break;

		case 12:
			cout << "\t\t************* Size/Length **************" << endl;
			a.length();
			break;

		case 13:
			cout << "\t\t************* Display List **************" << endl;
			a.display();
			break;

		case 14:
			cout << "\t\t************* De-Allocate List **************" << endl;
			a.deallocatelist();
			break;

		case 15:
			cout << "\t\t************* NUMBER OF ZEROS **************" << endl;
			a.zero();
			break;
		case 16:
			cout << "\t\t************* EXIT **************" << endl;
			a.exit();
			break;

		default:
			cout << "\t\t************* Invalid Option Inserted **************" << endl;
			break;

		}
		cout << endl;
		

	} while (option != 16);



	system("pause");
}