#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}	
		for(int i=1;i<=n;i++){
				if(a[1]!=a[2] && a[1]!=a[3]){
					cout<<1<<endl;
					break;
				}
				else if(a[i]!=a[1]){
					cout<<i<<endl;
				}
		}
	}
}
