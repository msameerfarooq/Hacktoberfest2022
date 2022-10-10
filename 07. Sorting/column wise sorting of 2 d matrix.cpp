#include<iostream>
using namespace std;
int* temp(int arr[], int size);
int main()
{
	int rows;
	cin >> rows;
	int** pp = new int* [rows];
	int cols ;
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter number of columns for row " << i << endl;
		cin >> cols;
		pp[i] = new int[cols];
	}
	cout << "ENter array elements\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> pp[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << pp[i][j];
		}
	}
	
	return 0;
}



int* sort(int arr[], int s)
{
	int temp;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}