// Find the "Kth" max and min element of an array.

/*
Input:
8
3
1 2 3 4 5 6 7 8

Output:
3th Minimum Value: 3
3th Maximum Value: 6

*/
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

int main()
{
	int n, k;
	cin >> n >> k;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, n);

	cout << k << "th Minimum Value: " << arr[k - 1] << "\n";
	cout << k << "th Maximum Value: " << arr[n - k];

	return 0;
}