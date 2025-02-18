#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;
class Solution {
public:
    vector<vector<int>>adj;
    void dfs(int src, vector<bool>&vis, int &count){
        
        vis[src] = true;
        for(int nb: adj[src]){
            if(vis[nb]!=0)continue;
            count++;
            dfs(nb, vis, count);
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        /*
            Similar to no of islands problem, here we can modify the dfs to keep track of 
            number of recursive calls we are making, that will give the area of 1s cluster.
        */
        int m= grid.size();
        int n= grid[0].size();
        //make adj list
        adj.resize(m*n);
        for(int i=0; i<m;i++){
            for(int j=0; j<n;j++){
                if(grid[i][j]==1){
                    int index = i*n+j;
                    if(i>0 && grid[i-1][j]==1)
                        adj[index].push_back((i-1)*n+j); //up
                    if(i<m-1 && grid[i+1][j]==1)
                        adj[index].push_back((i+1)*n+j); //down
                    if(j>0 && grid[i][j-1]==1)
                        adj[index].push_back(i*n+(j-1)); //left
                    if(j<n-1 && grid[i][j+1]==1)
                        adj[index].push_back(i*n+(j+1)); //right
                }
            }
        }
        vector<bool>vis(m*n, 0);
        //now analyze
        int res = 0;
        for(int i=0; i<m;i++){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==1){
                    int count=1;
                    int index = i*n+j;
                    dfs(index, vis, count);
                    res  = max(count, res);
                }
            }
        }
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}