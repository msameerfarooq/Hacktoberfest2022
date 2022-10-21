#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter number of rows\n";
	cin >> rows;
	for (int i = 1; i < rows; i++)
	{
		for (int j = 1; j <= rows - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= i * 2 - 1; k++)
		{
			if (k == 1 || k == i * 3 - 1)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = rows - 1; i > 0; i--)
	{
		for (int j = 1; j <= rows - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			if (k == 1 || k == i * 2 - 1)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
