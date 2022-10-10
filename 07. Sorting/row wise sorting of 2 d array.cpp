#include<iostream>
using namespace std;
int main()
{
	int rows ;
	cin >> rows;
	int** pp = new int* [rows];
	int* cols = new int[rows];
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter number of columns for row " << i << endl;
		cin >> cols[i];
		pp[i] = new int[cols[i]];
	}
	cout << "ENter array elements\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols[i]; j++)
		{
			cin>>pp[i][j];
		}
	}
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < cols[i]; j++)
		{

			for (int k = 0; k < cols[i] - j - 1; k++)
			{
				if (pp[i][k] > pp[i][k + 1])
				{
					temp = pp[i][k];
					pp[i][k] = pp[i][k + 1];
					pp[i][k + 1] = temp;
				}
			}
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols[i]; j++)
		{
			cout<< pp[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}