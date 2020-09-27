#include<iostream>
#include "list.h"
using namespace std;
int main()
{
	List a;

	int option;

	do {
		cout << "\t\t******************* MENU ***************" << endl;
		cout << "1.  Insertion " << endl;
		cout << "2.  Deletion " << endl;
		cout << "3.  Update " << endl;
		cout << "4.  Start " << endl;
		cout << "5.  Next " << endl;
		cout << "6.  Back " << endl;
		cout << "7.  Tail " << endl;
		cout << "8.  Find " << endl;
		cout << "9.  Get " << endl;
		cout << "10. Size/Length " << endl;
		cout << "11. Display List " << endl;
		cout << "12. Exit " << endl << endl;
		cout << "Choose an Option: ";
		cin >> option;
		cout << endl;

		switch (option)
		{

		case 1:
			cout << "\t\t************* Insertion **************" << endl;
			a.insert();
			break;

		case 2:
			cout << "\t\t************* Deletion **************" << endl;
			a.del();
			break;

		case 3:
			cout << "\t\t************* Update **************" << endl;
			a.update();
			break;


		case 4:
			cout << "\t\t************* Start **************" << endl;
			a.start();
			break;

		case 5:
			cout << "\t\t************* Next **************" << endl;
			a.next();
			break;

		case 6:
			cout << "\t\t************* Back **************" << endl;
			a.back();
			break;

		case 7:
			cout << "\t\t************* Tail **************" << endl;
			a.tail();
			break;

		case 8:
			cout << "\t\t************* Find **************" << endl;
			a.find();
			break;

		case 9:
			cout << "\t\t************* Get **************" << endl;
			a.get();
			break;

		case 10:
			cout << "\t\t************* Size/Length **************" << endl;
			a.length();
			break;

		case 11:
			cout << "\t\t************* Display List **************" << endl;
			a.display();
			break;

		case 12:
			cout << "\t\t************* EXIT **************" << endl;
		
			break;

		default:
			cout << "\t\t************* Invalid Option Inserted **************" << endl;
			break;

		}
		cout << endl;

	} while (option != 12);



	system("pause");
}