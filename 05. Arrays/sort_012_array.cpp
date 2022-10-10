/* 	Given an array which consists of only 0, 1 and 2.
 	Sort the array without using any sorting algorithm.
	aka Dutch National Flag Problem.
*/

/*
Input:
8
0 1 2 0 1 2 0 1

Output:
0 0 0 1 1 1 2 2

*/
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

// For Sorting 3 Numbers
void sort012(int arr[], int n) {
	int low = 0, mid = 0, high = n - 1;

	while (mid <= high)
	{
		if (arr[mid] == 0) {
			swap(arr[low], arr[mid]);
			low++; mid++;
		} else if (arr[mid] == 1) {
			mid++;
		} else if (arr[mid] == 2) {
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}
// For Sorting 2 Numbers
// void sort01(int arr[], int n) {
// 	int low = 0, high = n - 1;

// 	while (low <= high) {
// 		if (arr[low] == 0)
// 			low++;
// 		else {
// 			swap(arr[low], arr[high]);
// 			high--;
// 		}
// 	}
// }

int main()
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort012(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}