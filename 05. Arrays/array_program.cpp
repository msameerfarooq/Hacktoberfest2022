#include<bits/stdc++.h>

using namespace std;

//finds elements having at-least two greater elements

void greater_elements(int arr[], int n){
  cout << "\nElements which have at-least two greater elements are: ";

  for (int i = 0; i < n; i++){
    int
    var = 0;

    for (int j = 0; j < n; j++)

      if (arr[j] > arr[i])

        var ++;

    if (var >= 2)

      cout << arr[i] << " ";

  }

}

int main(){

  int arr[100], n, i;

  cout << "Enter number of elements: ";

  cin >> n;

  cout << "\nEnter elements: ";

  for (i = 0; i < n; i++)

    cin >> arr[i];

  cout << "Elements are: ";

  for (i = 0; i < n; i++)

    cout << arr[i] << " ";

  greater_elements(arr, n);

  return 0;

}
