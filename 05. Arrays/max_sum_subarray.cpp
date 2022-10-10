// Kadane's Algorithm.
// Find Largest sum contiguous Subarray.

/*
Input:
8
-2 -3 4 -1 -2 1 5 -3

Output:
7
(4,-1,-2,1,5)
*/
#include <bits/stdc++.h>
using namespace std;

// TC: O(n^3)  SC: O(1)
// int max_sum_subarray(int arr[], int n) {
// 	int maxSum = 0;

// 	for (int i = 0; i < n; i++) {
// 		for (int j = i; j < n; j++) {
// 			int sum = 0;
// 			for (int x = i; x <= j; x++)
// 				sum += arr[x];
// 			if (sum > maxSum)
// 				maxSum = sum;
// 		}
// 	}
// 	return maxSum;
// }

// TC: O(n^2)  SC: O(1)
// int max_sum_subarray(int arr[], int n) {
// 	int maxSum = 0;

// 	for (int i = 0; i < n; i++) {
// 		int sum = 0;
// 		for (int j = i; j < n; j++) {
// 			sum += arr[j];
// 			if (sum > maxSum)
// 				maxSum = sum;
// 		}
// 	}
// 	return maxSum;
// }

// TC: O(n)  SC: O(1)
int max_sum_subarray(int arr[], int n) {
	int maxSum = INT_MIN, sum = 0;

	for (int i = 0; i < n; i++)	{
		sum += arr[i];

		if (sum > maxSum)
			maxSum = sum;

		if (sum < 0)
			sum = 0;
	}
	return maxSum;
}

int main()
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << max_sum_subarray(arr, n);

	return 0;
}