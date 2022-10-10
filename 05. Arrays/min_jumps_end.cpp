// Minimum Number of jumps to reach to end
// Valley Peak Approach.
/*
Input:
6
1 4 3 2 6 7

Output:
2
(1 -> 4 -> 7)
*/

#include <bits/stdc++.h>
using namespace std;

// int getNextIndex(int arr[], int n, int start, int end) {
// 	int max = arr[start];
// 	int index = start;

// 	for (int i = start + 1; i <= end; i++) {
// 		if (arr[i] + i >= n - 1) return i;
// 		if (arr[i] >= max) {
// 			max = arr[i];
// 			index = i;
// 		}
// 	}
// 	return index;
// }

// int minJumps(int arr[], int n) {
// 	int jump = 0;

// 	for (int i = 0; i <= n - 2;) {
// 		cout << i << " ";
// 		if (arr[i] == 0) return -1;

// 		if (arr[i] + i >= n - 1) {
// 			jump++; break;
// 		}
// 		i = getNextIndex(arr, n, i + 1, arr[i] + i);
// 		jump++;
// 	}
// 	return jump;
// }

int minJumps(int arr[], int n) {
	if (n <= 1) return 0;
	if (arr[0] == 0) return -1;

	int max_reach = arr[0], jump = 0, steps = arr[0];

	for (int i = 1; i < n; i++) {
		if (i > max_reach) return -1;

		if (i == n - 1) return ++jump;

		if (arr[i] + i > max_reach)
			max_reach = arr[i] + i;

		steps--;

		if (steps == 0) {
			jump++;
			steps = max_reach - i;
		}
	}
	return jump;
}

int main()
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int jump = minJumps(arr, n);

	cout << jump;

	return 0;
}
