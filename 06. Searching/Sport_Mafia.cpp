#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
     ll n,k;
     cin>>n>>k;
     //p--> put->how many times candies kept
     //e--> eat->how many times candies ate
     ll l=0,h=n,m=l+(h-l)/2,e,p;
     while(l<=h){
         m=l+(h-l)/2;
         e=m;
         p=n-m;
         ll x=(p*(p+1))/2;
         //x--> total how many candies there in the box if we put p times
         if(x-e>k){
            l=m+1;
         }
         else if(x-e<k){
            h=m-1;
         }
         else{
            break;
         }
     }
     cout<<e;
}