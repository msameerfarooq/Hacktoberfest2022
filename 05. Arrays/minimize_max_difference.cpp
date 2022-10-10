// Minimaize the maximum difference between the Heights

/*
Input:
2 4
1 5 8 10

Output:
5
after modify: {3, 3, 6, 8}
5 = (8-3)

*/
#include <bits/stdc++.h>
using namespace std;

int getMaxDiffercence(int arr[], int n, int k) {
	sort(arr , arr + n);
	int diffMax = arr[n - 1] - arr[0];
	int mn, mx;

	for (int i = 0; i <= n - 2; i++) {

		if (arr[i + 1] < k) continue;

		mn = min(arr[i + 1] - k, arr[0] + k);
		mx = max(arr[i] + k, arr[n - 1] - k);

		diffMax = min(diffMax, mx - mn);
	}
	return diffMax;
}

int main()
{
	int k;  cin >> k;
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << getMaxDiffercence(arr, n , k);

	return 0;
}