#include <bits/stdc++.h>
using namespace std;

int InterpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos;

	if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {

		pos = lo
			+ (((double)(hi - lo) / (arr[hi] - arr[lo]))
				* (x - arr[lo]));

		if (arr[pos] == x)
			return pos;

		if (arr[pos] < x)
			return InterpolationSearch(arr, pos + 1, hi, x);

		if (arr[pos] > x)
			return InterpolationSearch(arr, lo, pos - 1, x);
	}
	return -1;
}

int main()
{

	int arr[] = { 13, 15, 76, 34, 28, 9, 67, 91, 2 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int x = 18;
	int index = InterpolationSearch(arr, 0, n - 1, x);

	if (index != -1)
		cout << "Element found at index " << index;
	else
		cout << "Element not found.";

	return 0;
}
