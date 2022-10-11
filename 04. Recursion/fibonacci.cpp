#include <iostream>
using namespace std;
int fibonnaci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonnaci(x-1)+fibonnaci(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fibonnaci(i);
      i++;
   }
   return 0;
}
