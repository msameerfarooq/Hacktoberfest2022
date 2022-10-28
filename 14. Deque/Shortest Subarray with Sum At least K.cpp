#include <bits/stdc++.h>

using namespace std;
int shortestSubarray(vector<int>& nums, int k) {
    int l=INT_MAX,s=0;
    long long csum[nums.size()];
    csum[0]=(long long)nums[0];
    for(int i=1;i<nums.size();i++)
        csum[i]=(long long)(csum[i-1]+nums[i]);
    deque<int>d;
    for(int i=0;i<nums.size();i++)
    {
        if(csum[i]>=k)
            l=min(l,i+1);
        while(!d.empty() and csum[i]>=csum[d.front()]+k)
        {
            l=min(l,i-d.front());
            d.pop_front();
        }
        while(!d.empty() and csum[i]<=csum[d.back()])
            d.pop_back();
        d.push_back(i);
    }
    return l==INT_MAX?-1:l;
}
int main()
{
    vector<int>v;
    int k=3;
    v.push_back(2);
    v.push_back(-1);
    v.push_back(2);
    cout<<shortestSubarray(v,k);

    return 0;
}
