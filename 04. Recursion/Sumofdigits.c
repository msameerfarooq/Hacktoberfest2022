#include<stdio.h>
int sumofdigits(int);
int main(){
    int a =sumofdigits(236984);
    printf("Sum = %d\n",a);
    return 0;
}
int sumofdigits(int n){
    if(n==0){
        return 0;
    }
    return n%10+sumofdigits(n/10);
}