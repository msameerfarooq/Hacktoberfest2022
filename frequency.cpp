#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int n;			// initialising size of array
  cin >> n;
  int arr[n];

  unordered_map < int, int >nar;	// using unoredered_maps which works on hash table.

  for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      nar[x]++;
    }
  cout << "element" << " " << "frequency" << endl;
for (auto i:nar)
    {
      cout << i.first << "   --     " << i.second << endl;
    }

  return 0;
}
