#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> v, int key) {
    sort(v.begin(), v.end());

    int low = 0, high = v.size()-1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(v[mid] == key) return mid;
        else if(key < v[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> v = {5, 4, 1, 2, 3};
    cout<<BinarySearch(v, 2);   
    return 0;
}