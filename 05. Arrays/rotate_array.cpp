//  Write a program to cyclically rotate an array by one.

/*
Input:
5
1 2 3 4 5

Output:
Rotated Array:
5 1 2 3 4

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int first = arr[n - 1];
	for (int i = n - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}

	arr[0] = first;

	cout << "Rotated Array: \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}