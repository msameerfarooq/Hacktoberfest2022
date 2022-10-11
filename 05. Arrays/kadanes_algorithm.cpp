// maximum subarray sum program

#include <iostream>
#include <cmath>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int res = arr[0];

    int maxEnding = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);

        res = max(maxEnding, res);
    }

    return res;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxSubarraySum(arr, n);
}
