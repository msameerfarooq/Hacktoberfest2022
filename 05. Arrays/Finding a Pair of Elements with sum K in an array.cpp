#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,n,max,sum;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter sum";
    cin>>sum;
    int arr[n];
    cout<<"Enter elements in an array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max=*max_element(arr,arr+n);
    int H[max]={0};
    for(i=0;i<n;i++){
        if(H[sum-arr[i]]!=0){
            cout<<"("<<arr[i]<<","<<sum-arr[i]<<")";
        }
        H[arr[i]]++;

    }
    return 0;
}
