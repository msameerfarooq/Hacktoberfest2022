// Move all the negative elements to one side of the array.

/*
Input:
6
2 -3 5 -1 -6 4

Output:
Negative Value First:
-3 -1 -6 2 5 4

*/
#include <bits/stdc++.h>
using namespace std;

void move_negative(int arr[], int n) {
	int neg = 0;

	for (int i = 0; i < n; ++i) {
		if (arr[i] < 0) {
			swap(arr[i], arr[neg]);
			neg++;
		}
	}
}

int main()
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	move_negative(arr, n);

	cout << "Negative Value First: \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}