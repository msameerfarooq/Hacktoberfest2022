#include <iostream>
using namespace std;



void filldisplayarray(int a[],int n);
void minvalue(int a[],int min);

void filldisplayarray(int a[],int n){
	cout<<"size";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
void minvalue(int a[],int min){
	min=a[0];
	int n;
	for(int i=1;i<=(n-1);i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	cout<<endl;
	cout<<"the smallest element in the given array is : ";
	cout<<min;
}
int main(){
	int n;
	int a[n];
	filldisplayarray(a,n);
	int min;
	minvalue(a,min);	

}