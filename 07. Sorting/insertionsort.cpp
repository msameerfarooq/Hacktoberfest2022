#include<bits/stdc++.h>

using namespace std;
void insertion_sort(int arr[], int n) {

  for (int i = 1; i < n; i++) {
    int current = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > current) {
      //swap
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }
  cout << "After insertion sort:" << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before insertion sort:" << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  insertion_sort(arr, n);
  return 0;
}
