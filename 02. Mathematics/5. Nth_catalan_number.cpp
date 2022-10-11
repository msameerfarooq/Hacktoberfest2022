#include <iostream>
using namespace std;
 
/*
    Program to find nth Catalan number
    Constraints 1<=n<=19

*/
long catalan(int n)
{
    long ar[n + 1];
 
    ar[0] = 1;
    ar[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        ar[i] = 0;
        for (int j = 0; j < i; j++)
            ar[i] += ar[j] * ar[i - j - 1];
    }
 
   
    return ar[n];
}
 
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"\n"<<n<<"th Catalan number is:"<<catalan(n)<<"\n";
    return 0;
}