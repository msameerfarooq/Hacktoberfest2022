// Find duplicate in an array of N+1 Integer

#include <bits/stdc++.h>
using namespace std;

// Print all Duplicate numbers
// void duplicateNums(int arr[], int n) {
// 	for (int i = 0; i < n; i++) {
// 		if (arr[abs(arr[i])] >= 0)
// 			arr[abs(arr[i])] = -arr[abs(arr[i])];
// 		else
// 			cout << abs(arr[i]) << " ";
// 	}
// }

int duplicateNums(int arr[], int n) {
	int slow = arr[0];
	int fast = arr[0];
	do {
		slow = arr[slow];
		fast = arr[arr[fast]];
	} while (slow != fast);

	fast = arr[0];

	while (slow != fast) {
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}

//  void duplicateNums(int arr[], int n) {
// 	int fqy[n + 1] = {0};

// 	for (int i = 0; i < n; i++)
// 		fqy[arr[i]]++;

// 	for (int i = 0; i < n; i++)
// 		if (fqy[i] >= 1)
// 			cout << i << " ";
// }

int main()
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << duplicateNums(arr, n);

	return 0;
}