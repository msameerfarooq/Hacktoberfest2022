#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> count;
    for(int i=0;i<27;i++){
        count.push_back(0);
    }
    map<char,int> mp;
    int j=1;
    for(char c='a';c<='z';c++){
        mp[c]=j;
        j++;
    }
    for(int i=0;i<n;i++){
        int val1=mp[s[i]];
        count[val1]++;
    }
 
    string copy=s;
    sort(all(copy));
 
    vector<int> count1;
    for(int i=0;i<27;i++){
        count1.push_back(0);
    }
    for(int i=0;i<k;i++){
        int val1=mp[copy[i]];
        count1[val1]++;
    }
    string anwser="";
    for(int i=0;i<n;i++){
        int val1=mp[s[i]];
        if(count1[val1]){
            count1[val1]--;
        }
        else{
            anwser.push_back(s[i]);
        }
    }
    cout << anwser << endl;
}
 
    
 
int main(){
  init();
  IOS;
  ll t=1;
  // cin >> t;
  while(t--){
      solve();
  }
}
