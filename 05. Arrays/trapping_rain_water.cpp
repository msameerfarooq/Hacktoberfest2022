// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
#include <bits/stdc++.h>
using namespace std;


int trap(vector<int> &height)
{

    int lmax = 0, rmax = 0, ans = 0, n = height.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (height[l] < height[r])
        {
            lmax = max(height[l], lmax);
            ans += (lmax - height[l]);
            l++;
        }
        else
        {
            rmax = max(height[r], rmax);
            ans += (rmax - height[r]);
            r--;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int target=2;
    cout<<trap(arr)<<endl;
}
