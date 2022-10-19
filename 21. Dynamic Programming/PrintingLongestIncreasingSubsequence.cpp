#include<bits/stdc++.h>
using namespace std;

void LIS(vector<int> arr)
{
    int n=arr.size();
    vector<vector<int> > dp(n);
 
    dp[0].push_back(arr[0]);
 
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((arr[i] > arr[j]) &&
                    (dp[i].size() < dp[j].size() + 1))
                dp[i] = dp[j];
        }
        dp[i].push_back(arr[i]);
    }
 
    vector<int> print = dp[0];
 
    for (vector<int> i : dp)
        if (i.size() > print.size())
            print = i;
    cout<<"The longest increasing subsequence is: ";
    for (int i : print)
        cout << i << " ";
    cout << endl;;
    cout<<"The length of the LIS is: "<<print.size();
}

int main(){
    int n;
    cin>>n;  //taking number of elements as input
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i]; // taking the array elements as input
    }
    LIS(v);
}