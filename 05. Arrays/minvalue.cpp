// C++ Program to find smallest number in an array
 
#include <iostream>
using namespace std;
   
int main(){
    int input[100], count, i, min;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
     
    min = input[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
        if(input[i] < min){
            min = input[i];
        }
    }
 
    cout  << "Minimum Element\n" << min;
 
    return 0;
}
