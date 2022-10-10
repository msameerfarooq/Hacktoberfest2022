// Find the Union and Intersection of the two sorted arrays.

/*
Input:
3
1 2 3
5
1 2 3 4 5

Output:
Union:
1 2 3 4 5

Intersection:
1 2 3

*/
#include<bits/stdc++.h>

using namespace std;

void findUnion(int a[], int n, int b[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else if (a[i] > b[j])
            cout << b[j++] << " ";
        else {
            cout << a[i] << " ";
            i++; j++;
        }
    }

    while (i < n)
        cout << a[i++] << " ";
    while (j < m)
        cout << b[j++] << " ";
}

void findIntersection(int a[], int n, int b[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j])
            cout << a[i] << " ";
        i++; j++;
    }
}

int main()
{
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m; cin >> m;

    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    cout << "Union:\n";
    findUnion(a, n, b, m);

    cout << "\n\nIntersection:\n";
    findIntersection(a, n, b, m);

    return 0;
}