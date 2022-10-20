#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter the count of rows : ";
	cin >> rows;
	int cols;
	cout << "Enter the count of columns : ";
	cin >> cols;
	int** array = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}
	//taking input 
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << " Enter the value of row " << i + 1 << " and column " << j+1 << " : ";
			cin >> array[i][j];
		}
	}
	//display the array
	cout << "Diplaying the matrix " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	//declaring an array for transpose
	int** transpose = new int * [rows];
	for (int i = 0; i < rows; i++)
	{
		transpose[i] = new int[cols];
	}
	//storing elements 
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			transpose[j][i] = array[i][j];
		}
	}
	cout << endl;
	//displaying the transpose of a matrix
	cout << " Transpose of a matrix" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << transpose[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		delete array[i];
	}
	delete[]array;
	array = NULL;
	for (int i = 0; i < rows; i++)
	{
		delete transpose[i];
	}
	delete[]transpose;
	transpose = nullptr;
	
	return 0;
}