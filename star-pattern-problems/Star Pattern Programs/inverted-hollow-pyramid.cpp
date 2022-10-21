#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter rows:"<<" ";
    cin>>n;

    for(int i = n ; i>=1 ; i--){
        for(int j = 1 ; j<=n-i; j++){
            cout<<" ";
        }
        
        for(int k = 1; k<=(2*i-1) ; k++){
            if(k !=1 && k!=2*i-1 && i !=n){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}