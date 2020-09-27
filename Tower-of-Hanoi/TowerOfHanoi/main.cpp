#include<iostream>
using namespace std;

void TOH(int n, int A, int B, int C);

int main()
{
	TOH(4, 1, 2, 3);
}

void TOH(int n, int A, int B, int C)
{
	if (n > 0)
	{
		TOH(n - 1, A, C, B);
		cout << "\nMove " << A << "-" << C << endl;
		TOH(n - 1, B, A, C);
	}
}