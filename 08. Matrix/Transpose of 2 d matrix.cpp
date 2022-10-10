#include<iostream>
using namespace std;
int main()
{
	int rows;
	int** pp = new int*[rows];
	int* cols = new int[rows];
	int** arr = new int* [rows];
	int cols;
	for (int i = 0; i < rows; i++)
	{
		cout << "ENter number of columns for row " << i << endl;
		cin >> cols[i];
		pp[i] = new int[cols[i]];

	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols[i]; j++)
		{
			arr[j][i] = pp[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < cols[i]; j++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

}