#include <bits/stdc++.h>
using namespace std;

int findSingleElement(vector<int> v) {
    int _xor = 0;

    for(int i: v) _xor = _xor ^ i;

    return _xor;
}

int main() {
    vector<int> v = {1, 1, 2, 3, 3, 4, 4};
    cout<<findSingleElement(v);
    return 0;
}