//  Reverse an array

/*
Input:
5
5 4 3 2 1

Output:
Reversed Array:
1 2 3 4 5
*/

#include <bits/stdc++.h>
using namespace std;

// void reverse(int arr[], int n) {
// 	for (int i = 0; i <= n / 2; i++) {
// 		int temp = arr[i];
// 		arr[i] = arr[n - i - 1];
// 		arr[n - i - 1] = temp;
// 	}
// }

void reverse(int arr[], int n) {
	int left = 0, right = n - 1;

	while (left < right) {
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
}

int main()
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	reverse(arr, n);

	cout << "Reversed Array: \n";

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}