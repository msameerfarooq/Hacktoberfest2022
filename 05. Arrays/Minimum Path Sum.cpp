
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> dp;
int minPathSum(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>> dp(n, vector<int> (m, 0));
        
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0)
                dp[i][j] = grid[i][j];
                
            else{
                int u = grid[i][j];
                if(i>0)
                    u += dp[i-1][j];
                    
                else
                    u += 1e9;
                
                int l = grid[i][j];
                if(j>0)
                    l += dp[i][j-1];
                else l += 1e9;
                    
                dp[i][j] = min(u, l);
            }
        }
    }
        
    return dp[n-1][m-1];
}

int main()
{
    vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    dp.resize(3, vector<int> (3, 0));
    
    int r = minPathSum(grid);
    cout << r;

}
