#include <iostream>
using namespace std;
 
/*
    Program to find nth Catalan number
    Constraints 1<=n<=19

*/
cpp_int findCatalan(int n) 

    {

        cpp_int dp[n+1];

        dp[0]=1;

        dp[1]=1;

        for(int i=2; i<n+1; i++){

            for(int j=0; j<i; j++){

                dp[i]+=dp[j]*dp[i-j-1];

            }

        }

        return dp[n];

    
}
 
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"\n"<<n<<"th Catalan number is:"<<findCatalan(n)<<"\n";
    return 0;
}
