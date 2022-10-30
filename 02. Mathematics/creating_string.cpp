// generate all different strings that can be created using its characters.


#ifndef ONLINE_JUDGE
#include "debug.hpp"
#else
#define debug(...)
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ve vector<int>
#define vell vector<ll>
#define vpp vector<pair<int, int>>
#define ump unordered_map<int, int>
#define rep1(i, a, b) for (int i = a; i < (b); i++)
#define rep(i, n) for (int i = 0; i < (n); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, n) for (int i = (n)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define asort(a) sort(a, a + n)
#define all(x) (x).begin(), (x).end()
#define uniq(v) v.erase(unique(all(v)), (v).end())
#define vmax(v) *max_element(v.begin(), v.end());
#define vmin(v) *min_element(v.begin(), v.end());
const ll INF = 1e18 + 10;
const int mod = 1e9 + 7; // 998244353;

set<string> perms;

void permutations(string prefix, string suffix)
{
    if (suffix.length() == 0)
    {
        perms.insert(prefix);
        return;
    }
    for (int i = 0; i < suffix.length(); i++)
    {
        permutations(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i + 1));
    }
}

int main()
{

    (ios_base::sync_with_stdio(false), cin.tie(NULL));
    string s;
    cin >> s;
    permutations("", s);
    cout << perms.size() << endl;
    for (auto ele : perms)
    {
        cout << ele << endl;
    }
    return 0;
}
