#include <bits/stdc++.h>

using namespace std;

int maximumProfit(vector<int> &Arr){
    
	int maxProfit = 0;
	int mini = Arr[0];
	
	for(int i=1;i<Arr.size();i++){
        int curProfit = Arr[i] - mini;
        maxProfit = max(maxProfit,curProfit);
        mini = min(mini,Arr[i]);
        }
	return maxProfit;
}
//Time complexity - O(n)
//Space complexity- O(1)
int main() {
  int n;
  cin>>n;
  int a;
  vector<int>v;
 for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
 }
  cout<<"The maximum profit by selling the stock is "<<maximumProfit(v);
}
