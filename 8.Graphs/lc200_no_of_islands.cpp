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
    void dfs(int src, vector<bool>&vis ){
        //visit a node
        //cout<< src;
        //mark it visited
        vis[src]= true;
        //recursively explore its neighbors
        for(int nb: adj[src]){
            if(vis[nb]!=0)continue;
            dfs(nb, vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        /*
            Assume the grid as a graph with 1 representing nodes. We have to find largest number of
            connected components (1s) in the graph.

            So we will traverse the grid, and when we will find a 1, we will do dfs, and do count++
            In this way we will have visited all 1s clusters
        */
        int m= grid.size();
        int n = grid[0].size();
        int count=0;
        //create a 1d adjacency list from the graph
        adj.resize(m*n);
        //position of i,j from grid in the flattened adj list would be index = i*n+j;
        for(int i=0; i<m;i++){
            for(int j=0; j<n;j++){
                if(grid[i][j]=='1'){
                    int index = i*n+j; //convert (i,j) to 1d index
                    if( i>0 && grid[i-1][j]=='1'){//up
                        adj[index].push_back((i-1)*n+j);
                    } 
                    if(i<m-1 && grid[i+1][j]=='1'){//down
                        adj[index].push_back((i+1)*n+j);
                    } 
                    if(j>0 && grid[i][j-1]=='1'){//left
                        adj[index].push_back(i*n+(j-1));
                    } 
                    if(j<n-1 && grid[i][j+1]=='1'){//right
                        adj[index].push_back(i*n+(j+1));
                    } 

                }
            }
        }

        vector<bool>vis(m*n, 0);
        for(int i=0; i<m;i++){
            for(int j=0; j<n;j++){
                 int index = i*n+j;
                if(grid[i][j]=='1' && vis[index]==0){                   
                    dfs(index, vis);
                    count++;
                }
            }
        }
        return count;
         
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}