// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check valid coordinate
int validCoord(int x, int y, int n, int m)
{

	if (x < 0 || y < 0) {
		return 0;
	}
	if (x >= n || y >= m) {
		return 0;
	}
	return 1;
}

// Function to run bfs
void bfs(int n, int m, int data[][8],
					int x, int y, int color)
{

// Visiting array
int vis[101][101];

// Initializing all as zero
memset(vis, 0, sizeof(vis));

// Creating queue for bfs
queue<pair<int, int> > obj;

// Pushing pair of {x, y}
obj.push({ x, y });

// Marking {x, y} as visited
vis[x][y] = 1;

// Until queue is empty
while (obj.empty() != 1)
{

	// Extracting front pair
	pair<int, int> coord = obj.front();
	int x = coord.first;
	int y = coord.second;
	int preColor = data[x][y];

	data[x][y] = color;
	
	// Popping front pair of queue
	obj.pop();

	// For Upside Pixel or Cell
	if (validCoord(x + 1, y, n, m)
		&& vis[x + 1][y] == 0
		&& data[x + 1][y] == preColor)
	{
	obj.push({ x + 1, y });
	vis[x + 1][y] = 1;
	}
	
	// For Downside Pixel or Cell
	if (validCoord(x - 1, y, n, m)
		&& vis[x - 1][y] == 0
		&& data[x - 1][y] == preColor)
	{
	obj.push({ x - 1, y });
	vis[x - 1][y] = 1;
	}
	
	// For Right side Pixel or Cell
	if (validCoord(x, y + 1, n, m)
		&& vis[x][y + 1] == 0
		&& data[x][y + 1] == preColor)
	{
	obj.push({ x, y + 1 });
	vis[x][y + 1] = 1;
	}
	
	// For Left side Pixel or Cell
	if (validCoord(x, y - 1, n, m)
		&& vis[x][y - 1] == 0
		&& data[x][y - 1] == preColor)
	{
	obj.push({ x, y - 1 });
	vis[x][y - 1] = 1;
	}
}

// Printing The Changed Matrix Of Pixels
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < m; j++)
	{
	cout << data[i][j] << " ";
	}
	cout << endl;
}
cout << endl;
}

// Driver Code
int main()
{
int n, m, x, y, color;
n = 8;
m = 8;

int data[8][8] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 0, 0 },
	{ 1, 0, 0, 1, 1, 0, 1, 1 },
	{ 1, 2, 2, 2, 2, 0, 1, 0 },
	{ 1, 1, 1, 2, 2, 0, 1, 0 },
	{ 1, 1, 1, 2, 2, 2, 2, 0 },
	{ 1, 1, 1, 1, 1, 2, 1, 1 },
	{ 1, 1, 1, 1, 1, 2, 2, 1 },
};

x = 4, y = 4, color = 3;

// Function Call
bfs(n, m, data, x, y, color);
return 0;
}
