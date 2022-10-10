 
#include <iostream>
using namespace std;
 
// function to check for
// perfect square number
int checkPerfectSquare(
    long int N,
    long int start,
    long int last)
{
    // Find the mid value
    // from start and last
    long int mid = (start + last) / 2;
 
    if (start > last) {
        return -1;
    }
 
    // check if we got the number which
    // is square root of the perfect
    // square number N
    if (mid * mid == N) {
        return mid;
    }
 
    // if the square(mid) is greater than N
    // it means only lower values then mid
    // will be possibly the square root of N
    else if (mid * mid > N) {
        return checkPerfectSquare(
            N, start, mid - 1);
    }
 
    // if the square(mid) is less than N
    // it means only higher values then mid
    // will be possibly the square root of N
    else {
        return checkPerfectSquare(
            N, mid + 1, last);
    }
}
 
// Driver code
int main()
{
    long int N = 65;
 
    cout << checkPerfectSquare(N, 1, N);
    return 0;
}
