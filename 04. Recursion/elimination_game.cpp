/*

Question : #390 Elimination Game.

You have a list arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:

->Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.
->Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.
->Keep repeating the steps again, alternating left to right and right to left, until a single number remains.


Given the integer n, return the last number that remains in arr.




* Example 1:

Input: n = 9
Output: 6
Explanation:
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
arr = [2, 4, 6, 8]
arr = [2, 6]
arr = [6]



* Example 2:

Input: n = 1
Output: 1


* Constraints:

1 <= n <= 1e9

*/

// Approach : since the constraints are large we need to think of O(logn) solution.
// Recursion + Math Problem

#include <bits/stdc++.h>
using namespace std;

int solve(int n, int i) // i==0 denotes that we start eliminating from left . // i =1 denotes that we start elimination from right.
{
    if (n == 1)
        return 1;
    if (i == 0)
    {
        return (2) * solve(n / 2, 1);
        /*
          let's say we have array  = [1,2,3,4,5,6,7,8,9];
          now we we delete the alternating elements starting from left.
          we are left with [2,4,6,8];
          we can write this as :  2*[1,2,3,4]; // multiply each no with 2 and we will get the original numbers.
          // then we call the solve function on [1,2,3,4] and this time i will be set to 1 and our n will by n/2;
        */
    }
    else if (i == 1)
    {
        // i =1 -> start elemination from right.
        if (n % 2 == 0)
            return (2 * solve((n + 1) / 2, 0)) - 1;
        /*
            example array = [1,2,3,4,5,6];
            after elimination = [1,3,5];
            we can also write this array as =  (2*[1,2,3]) -1;
            and n' = (n+1)/2  //  ==> n' = (6+1)/2 = 3.
        */
        else
            return (2 * solve((n - 1) / 2, 0));
        /*
            example array = [1,2,3,4,5,6,7];
            after elimination = [2,4,6];
            we can also write this array as =  (2*[1,2,3]) ;
            and n' = (n-1)/2  //  ==> n' = (7-1)/2 = 3.

        */
    }
    return n;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;
    cout << "The last Element remaing will be: " << solve(n, 0) << endl;
    return 0;
}