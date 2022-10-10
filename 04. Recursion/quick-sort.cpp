#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<ctime>
using namespace std;
void printfArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition(int arr[],int low,int high)
{
   int pivote=arr[low];
   int i=low+1;
   int j=high;
   int tem=0,tem1=0;
   do{
       while(arr[i]<=pivote)
       {
           i++;
       }
       while(arr[j]>pivote)
       {
           j--;
       }
       if(i<j)
       {
             tem=arr[i];
             arr[i]=arr[j];
             arr[j]=tem;
       }
   }while(i<j);

   tem1=arr[low];
   arr[low]=arr[j];
   arr[j]=tem1;
   return j;
} 
void quickSort(int arr[],int low,int high)
{
   for(int i=0;i<1000000;i++); 
   if(low<high)
    {
        int partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main()
{
    
    
    int n=6;
    int a[n]={34,12,33,2,56,2};
    printfArray(a,n);
   
    
    quickSort(a,0,n-1);
   
    
    cout<<endl;
    printfArray(a,n);
   
    
}
