#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

//lcm(a,b)=a*b/hcf(a,b)

// Method to calculate HCF of two numbers
ll hcf(ll a, ll b)
{
    if(b==0)
        return a;
    return hcf(b,a%b);
}
//Method to calculate LCM of numbers from array
ll lcm(ll arr[],int n)
{
    ll ans=arr[0];
    for(int i=1;i<n;i++)
    {
        ans=((arr[i]*ans)/(hcf(arr[i],ans)));
    }
    return ans;
}



int main()
{
    ll arr[]={21223232323,72322323,3,1239,4};
    cout<<lcm(arr,5)<<endl;
    cout<<hcf(12,24);

}
