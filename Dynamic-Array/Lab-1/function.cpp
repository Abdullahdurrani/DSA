#include<iostream>
#include"list.h"
using namespace std;


////////////////////////////////////////// 1. CREATE LIST //////////////////////////////////////////////
void List::createlist()
{
		if (max == 0)
		{
			cout << "\nEnter maximum limit: ";
			cin >> max;
			A = new int[max + 1];
			CI++;
			line();
			cout << "\n********** List Created Successfully ***************" << endl;
			line();
		}
		else
			cout << "\n!!!!!!!!! De allocate list first !!!!!!!!! " << endl;

}


////////////////////////////////////////// 2. INSERTION //////////////////////////////////////////////
void List::insert()
{

	int option;
	int flag;
	int bylocation;
	int byvalue;
	int insloc;
	if (max != 0)
	{
		if (size == 0)
		{

			cout << "\n Enter Number: ";
			cin >> A[CI];
			size++;
		}
		else


			do {
				cout << "\n!!!!!!!!!!!!! Insertion !!!!!!!!!!!!!!!!!!!!" << endl;
				cout << "\n1. By Location " << endl;
				cout << "\n2. By value " << endl;
				cout << "\n3. Menu " << endl;

				cout << "\n Choose an option: ";
				cin >> option;


				switch (option)
				{
				case 1:
				{
					cout << "\n!!!!!!!!!!!!! BY LOCATION !!!!!!!!!!!!!!" << endl;
					int loc;
					do {

						cout << "\n1. At the location " << endl;
						cout << "\n2. Before The location " << endl;
						cout << "3. After the location " << endl;
						cout << "4. Menu " << endl;
						cout << "\n Choose an option: ";
						cin >> loc;

						switch (loc)
						{
						case 1:
						{
							if (size<max)
							{

							cout << "\n ***************** AT THE LOCATION *********************" << endl;

							

							cout << "\n\n Current Index is: " << CI <<"\t Size is: " << size<<"\t Maximum Size is: "<<max<<endl;


							cout << "\n\n1.Enter at current Location "<<endl;
							cout << "2.Enter new Location " << endl;
							
							cout << "\n\nChoose an Option: ";
							cin >> insloc;
							
							if (insloc == 1)
							{
								insertatlocation();
								size++;
								
								cout << "\n********** Number added successfully to the list **********" << endl;
								
								display();
							}
							else if (insloc == 2)
							{
								flag = findlocation();
								if (flag == 1)
								{
									insertatlocation();
									
									cout << "\n********** Number added successfully to the list **********" << endl;
									
									display();

								}
								else
									
									cout << "\n !!!!!!!!!!!!! No location Found !!!!!!!!!!!!!" << endl;
									
							}
						
								
							}
							else if (size == 1)
							{
								cout << "\n Enter Number: ";
								cin >> A[CI];
							}
							else
								cout << "\n\n !!!!!!!!!!!!!Size Exceeded the maximum Limit !!!!!!!!!!!!!" << endl;

							break;
						}
						case 2:
						{

							if (size == 1)
							{
								cout << "\n\n!!!!!! Only one number entered which is at the first location !!!!!!" << endl;
							}

							else
							{

							cout << "\n ***************** BEFORE THE LOCATION ******************" << endl;

							cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;


								cout << "\n\n1.Enter before the current Location " << endl;
								
								cout << "2.Enter new Location " << endl;
								
								cout << "\n\nChoose an Option: ";
								cin >> insloc;

								if (insloc == 1)
								{
									if (CI == 1)
									{
										cout << "\n!!!!!!! Index is at the first place !!!!!!!" << endl;
									}
									else
									{
										CI--;
										insertatlocation();
										size++;
										cout << "\n********** Number added successfully to the list **********" << endl;
										display();
									}
									
								}
								else if (insloc == 2)
								{
									flag = findlocation();
									if (CI == 1)
									{
										cout << "\n!!!!!!! ALREADY AT THE FIRST PLACE !!!!!!!" << endl;
									}
									else
									{
										if (flag == 1)
										{
											CI--;
											insertatlocation();
											size++;
											cout << "\n********** Number added successfully to the list **********" << endl;
											display();
										}
										else
											cout << "\n\n\n !!!!!!!!!!!!! No location Found !!!!!!!!!!!!!" << endl;
									}
									
								}


							}

							break;
						}
						case 3:
						{
							if (size != 0)
							{
								if (size < max)

								{
									cout << "\n ***************** AFTER THE LOCATION ******************" << endl;



									cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;


									cout << "\n\n1.Enter after the current Location " << endl;
									if (size > 1)
									{
										cout << "2.Enter new Location " << endl;
									}
									cout << "\n\nChoose an Option: ";
									cin >> insloc;

									if (insloc == 1)
									{
										CI++;
										insertatlocation();
										size++;
										cout << "\n********** Number added successfully to the list **********" << endl;
										display();
									}
									else if (insloc == 2)
									{
										flag = findlocation();
										if (flag == 1)
										{
											CI++;
											insertatlocation();
											size++;
											cout << "\n********** Number added successfully to the list **********" << endl;
											display();
										}
										else
											cout << "\n\n\n !!!!!!!!!!!!! No location Found !!!!!!!!!!!!!" << endl;

									}
								}

								else
									cout << "\n\n !!!!!!!!!!!!!Size Exceeded the maximum Limit !!!!!!!!!!!!!" << endl;
							}
							else
								cout << "\n No values added before" << endl;


							break;
						}
						}
					} while (loc != 4);
					break;
				}

				case 2:
				{
					int val;

					if(size!=0)
					{ 
					cout << "\n !!!!!!!!!!!!!! BY VALUE !!!!!!!!!!!!!!!!!" << endl;
					do {
						cout << "\n 1. Before The value " << endl;
						cout << "2. After the value " << endl;
						cout << "3. Menu " << endl;
						cout << "\n Choose an option: ";
						cin >> val;

						switch (val)
						{
						case 1:
							if (size < max)
							{
							cout << "\n ***************** BEFORE THE VALUE ******************" << endl;

							cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;


							
								flag = find();
								if (flag == 1)
								{
									for (int i = size; i >= CI; i--)
									{
										A[i + 1] = A[i];
									}
									cout << "\nEnter new value to add before the Value: ";
									cin >> A[CI];
									size++;
									cout << "\nValue updated Successfully!!!!\n";
									display();
								}
							}
							else
								cout << "\n!!!!!!!!!!!!!! Size exceeded maximum list limit !!!!!!!!!!!!!!";

							break;

						case 2:
						{
							if (size < max)
							{
							cout << "\n ***************** AFTER THE VALUE ******************" << endl;

							cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;


							
								flag = find();
								if (flag == 1)
								{
									for (int i = size; i >CI; i--)
									{
										A[i + 1] = A[i];
									}
									cout << "\nEnter new value to add after the Value: ";
									cin >> A[CI+1];
									size++;
									cout << "\nValue updated Successfully!!!!\n";
									display();
								}
							}
							else
								cout << "\n!!!!!!!!!!!!!! Size exceeded maximum list limit !!!!!!!!!!!!!!";

							break;
						}
						}

					} while (val != 3);
				}
					else
						cout << "\n\n!!!!!!!! NO value added before !!!!!!!!!" << endl;
				}
				
				break;
				}
			} while (option != 3);
		
	}
	else
		cout << "\n Create List First " << endl;
}



////////////////////////////////////////// 3. DELETION //////////////////////////////////////////////
void List::del()
{

	int option;
	int flag;
	int bylocation;
	int byvalue;
	int insloc;
	if (max != 0)
	{
		if (size != 0)
		{


			do {
		 if (size == 0)
		{
			cout << "\n Size is zero " << endl;
			break;
		}
		 else
		 {
			 cout << "\n!!!!!!!!!!!!! DELETE !!!!!!!!!!!!!!!!!!!!" << endl;
			 cout << "\n1. By Location " << endl;
			 cout << "\n2. By value " << endl;
			 cout << "\n3. Odd/Even Number " << endl;
			 cout << "\n4. Prime No " << endl;
			 cout << "\n5. Menu " << endl;

			 cout << "\n Choose an option: ";
			 cin >> option;


			 switch (option)
			 {
			 case 1:
			 {
				 cout << "\n!!!!!!!!!!!!! BY LOCATION !!!!!!!!!!!!!!" << endl;


				 cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;

				 cout << "\n\n1.Delete at current Location " << endl;
				 if (size > 1)
				 {
					 cout << "2.Enter new Location " << endl;
				 }
				 cout << "\n\nChoose an Option: ";
				 cin >> insloc;

				 if (insloc == 1)
				 {
					 for (int i = CI; i < size; i++)
					 {
						 A[i] = A[i + 1];
					 }
					 size--;
					 cout << "Number deleted successfully!";
					 display();
				 }
				 else if (insloc == 2)
				 {
					 flag = findlocation();
					 if (flag == 1)
					 {
						 for (int i = CI; i < size; i++)
						 {
							 A[i] = A[i + 1];
						 }
						 size--;
						 cout << "Number deleted successfully!";
						 display();
					 }
					 else
						 cout << "\n\n\n !!!!!!!!!!!!! No location Found !!!!!!!!!!!!!" << endl;
				 }
				 break;
			 }


			 case 2:
			 {
				 int val;

				 if (size != 0)
				 {
						 cout << "\n !!!!!!!!!!!!!! BY VALUE !!!!!!!!!!!!!!!!!" << endl;

						 display();
						 cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;



						 flag = find();
						 if (flag == 1)
						 {
							 for (int i = CI; i < size; i++)
							 {
								 A[i] = A[i + 1];
							 }
							 size--;
							 cout << "Number deleted successfully!";
							 display();
						 }

				 }
				 else
					 cout << "\n\n!!!!!!!! NO value added before !!!!!!!!!" << endl;
			 }

			 break;

			 case 3:
			 {
				 int val;

				 if (size != 0)
				 {
					 cout << "\n !!!!!!!!!!!!!! ODD/EVEN !!!!!!!!!!!!!!!!!" << endl;
					 do {
						 cout << "\n 1. Odd Numbers " << endl;
						 cout << "2. Even Numbers " << endl;
						 cout << "3. Menu " << endl;
						 cout << "\n Choose an option: ";
						 cin >> val;

						 switch (val)
						 {

						 case 1:

							 cout << "\n ***************** ODD NUMBERS ******************" << endl;


							 display();
							 cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;


							 for (int i = size; i >= 1; i--)
							 {
								 if (A[i] % 2 != 0)
								 {
									 for (int j = i; j < size; j++)
									 {
										 A[j] = A[j + 1];
									 }
									 size--;
								 }
							 }
							 cout << "Odd Number deleted successfully!" << endl;
							 display();
							 break;

						 case 2:
						 {
							 cout << "\n ***************** EVEN NUMBERS ******************" << endl;


							 display();
							 cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;


							 for (int i = size; i >= 1; i--)
							 {
								 if (A[i] % 2 == 0)
								 {
									 for (int j = i; j < size; j++)
									 {
										 A[j] = A[j + 1];
									 }
									 size--;
								 }
							 }
							 cout << "Odd Number deleted successfully!" << endl;
							 display();
						 }
						 break;



						 }
					 } while (val != 3);

				 }
				 else
					 cout << "\n\n!!!!!!!! NO value added before !!!!!!!!!" << endl;


			 }

			 break;

			 case 4:
			 {
				 cout << "\n ***************** PRIME NUMBERS ******************" << endl;


				 display();
				 cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;




				 for (int i = size; i >= 1; i--)
				 {
					 int f = prime(A[i]);
					 if (f == 1)
					 {
						 for (int j = i; j < size; j++)
						 {
							 A[j] = A[j + 1];
						 }
						 size--;
					 }


				 }
				 cout << "Prime Number deleted successfully!" << endl;
				 display();
				 break;
			 }
			 }
		 }
				

			}while (option != 5);
		}

		else
		{
			cout << "\n Insert Elements in List First " << endl;
		}

	}
	else
		cout << "\n Create List First " << endl;





}




////////////////////////////////////////// 4. UPDATE //////////////////////////////////////////////
void List::update()
{

int flag;

if (max != 0)
{
	if (size != 0)
	{

			if (size != 0)
			{
				
					cout << "\n !!!!!!!!!!!!!! BY VALUE !!!!!!!!!!!!!!!!!" << endl;

							display();
							cout << "\n\n Current Index is: " << CI << "\t Size is: " << size << "\t Maximum Size is: " << max << endl;

							flag = find();
								if (flag == 1)
								{
									cout << "\nEnter new value to update: ";
									cin >> A[CI];

									cout << "\n ******** Value updated Successfully ********\n";
									display();
								}				
			}
			else
				cout << "\n\n!!!!!!!! NO value added before !!!!!!!!!" << endl;
		}
	else
	{
		cout << "\n Insert Elements in List First " << endl;
	}
	}
	
else
cout << "\n Create List First " << endl;
}




////////////////////////////////////////// 5. START //////////////////////////////////////////////
void List::start()
{
	if (size != 0)
	{
		CI = 1;
		cout << "\nStart Value: " << CI << endl << "\nNumber: " << A[CI];
	}
	else if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else
		cout << "\n List is empty Insert Elements First " << endl;
}





////////////////////////////////////////// 6. NEXT //////////////////////////////////////////////
void List::next()
{
	if (size != 0)
	{
		if (CI != size)
		{
			CI++;
			cout << "Next Index: " << CI << endl;
			cout << "\nValue: " << A[CI] << endl;
		}
		else
			cout << "You are at the end " << endl;
	}
	else if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else
		cout << "\n List is empty Insert Elements First " << endl;

}



////////////////////////////////////////// 7. BACK //////////////////////////////////////////////
void List::back()
{
	if (size != 0)
	{
		if (CI != 1)
		{
			CI--;
			cout << "Back Index: " << CI << endl;
			cout << "\nValue: " << A[CI] << endl;
		}
		else
			cout << "At the first location already" << endl;
	}
	else if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else
		cout << "\n List is empty Insert Elements First " << endl;
}



////////////////////////////////////////// 8. TAIL //////////////////////////////////////////////
void List::tail()
{
	if (size != 0)
	{
		CI = size;
		cout << "Tail Index: " << CI << endl << "\nTail Value: " << A[CI];
	}
	else if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else
		cout << "\n List is empty Insert Elements First " << endl;
}


////////////////////////////////////////// 9. FIND //////////////////////////////////////////////
int List::find()
{
	int num;
	int flag = 0;

	if (max == 0)
	{
		cout << "No list found! Create a list first " << endl;
	}

	else if (size != 0)
	{

		cout << "Enter the number: ";
		cin >> num;

		for (int i = 1; i <= size; i++)
		{
			if (num == A[i])
			{
				CI = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			cout << "Number: " << num << " found at " << CI << " place in the list " << endl;
			return flag;
		}
		else
			cout << "Number not found in the list" << endl;
		return flag;
	}
	else
		cout << "List is empty! Insert elements in array first " << endl;
}




////////////////////////////////////////// 10. COPY //////////////////////////////////////////////
void List::copy()
{
	if (size != 0)
	{
		int * B;
		int sizeB =0;
		int maxB = 0;
		
		B = new int[maxB + 1];

		sizeB = size;

		for (int i = 1; i <= sizeB; i++)
		{
			B[i] = A[i];
		}

		cout << "\n*********** SUCCESSFULLY COPIED LIST ***************" << endl;
		cout << "\n\nList B:" << endl;
		display();

	}

	else if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else
		cout << "\n List is empty Insert Elements First " << endl;


}


////////////////////////////////////////// 11. GET //////////////////////////////////////////////
void List::get()
{

	if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else if (size != 0)
	{
		cout << "Current Index is " << CI << " and its value is " << A[CI];
	}
	else
		cout << "\n List is empty Insert Elements First " << endl;
}




////////////////////////////////////////// 12. LENGTH //////////////////////////////////////////////
void List::length()
{

	if (size != 0)
	{
		cout << "Total elements length: " << size << endl;
	}
	else if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else
		cout << "List is empty" << endl;
}




////////////////////////////////////////// 13. DISPLAY //////////////////////////////////////////////
void List::display()
{

	if (size != 0)
	{
			line();
			cout << "\nNo\t | ";
			for (int i = 1; i <= size; i++)
			{
				cout << A[i] << "\t| ";
			}
			line();
			cout << "\nLoc\t | ";
			for (int j = 1; j <= size; j++)
			{
				cout << j << "\t| ";
			}
			line();
	}
	else if (max == 0)
	{
		cout << "Create a List first " << endl;
	}
	else
		cout << "List is empty" << endl;

}



////////////////////////////////////// 14. DE-ALLOCATE LIST ///////////////////////////////////////
void List::deallocatelist()
{
		if (max == 0)
		{
			cout << "\nCreate a list first " << endl;
		}
		else
		{
			delete[] A;
			max = 0;
			cout << "\n De-allocated List successfully" << endl;
		}
			

}





////////////////////////////////////// 15. NUMBER OF ZEROS ///////////////////////////////////////
void List::zero()
{
	int zeros = 0;
	for (int i = 1; i <= size; i++)
	{
		if (A[i] == 0)
		{
			zeros++;
		}
	}
	display();
	cout << "\n Total number of Zeros In the list are: " << zeros<<endl;
}






////////////////////////////////////// 16. EXIT ///////////////////////////////////////
void List::exit()
{
	cout << "\n\n\t\t************** ALLAH HAFIZ **************" << endl;
}





////////////////////////////////////// AT CURRENT LOCATION ///////////////////////////////////////
void List::insertatlocation()
{
	for (int i = size; i >= CI; i--)
	{
		A[i + 1] = A[i];
	}
	cout << "\n\n\nEnter New Number: ";
	cin >> A[CI];
}



////////////////////////////////////// FIND LOCATION ///////////////////////////////////////
int List::findlocation()
{
	int num;
	int flag = 0;

	if (max == 0)
	{
		cout << "No list found! Create a list first " << endl;
	}

	else if (size != 0)
	{

		cout << "Enter the Location: ";
		cin >> num;

		for (int i = 1; i <= size; i++)
		{
			if (num == i)
			{
				CI = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			cout << "Entered Location exists: " << num << endl;
			return 1;
			return flag;
		}
		else
			cout << "Location not found in the list" << endl;
		return 0;
		return flag;
	}
	else
		cout << "List is empty! Insert elements in array first " << endl;
}








////////////////////////////////////// ISPRIME ///////////////////////////////////////
int List::prime(int num)
{
	int f = 1;

		for (int k = 2; k < num / 2; k++)
		{
			if (num % k == 0)
			{
				f = 0;
				break;
			}
		}
		if (f == 1)
		{
			return 1;
		}
		else
			return 0;
}




////////////////////////////////////////// MENU //////////////////////////////////////////////
void List::menu()
{
	cout << "\t\t******************* MENU ***************" << endl;
	cout << "1.  create List " << endl;
	cout << "2.  Insertion " << endl;
	cout << "3.  Deletion " << endl;
	cout << "4.  Update " << endl;
	cout << "5.  Start " << endl;
	cout << "6.  Next " << endl;
	cout << "7.  Back " << endl;
	cout << "8.  Tail " << endl;
	cout << "9.  Find " << endl;
	cout << "10. Copy " << endl;
	cout << "11. Get " << endl;
	cout << "12. Size/Length " << endl;
	cout << "13. Display List " << endl;
	cout << "14. De-Allocate List " << endl;
	cout << "15. Number Of Zeros " << endl << endl;
	cout << "16. Exit " << endl << endl;
}


void List::line()
{
	cout << "\n_________________________________________________________________________" << endl;
}