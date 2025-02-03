#include <iostream>
#include <vector>
#include <string>
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
    void existHelper(vector<vector<char>>& board, string word, int i, int j, int idx, bool &res, vector<vector<bool>>& vis ){
        //I trust this function to go to every cell, and explore choices from it
        int m= board.size();
        int n= board[0].size();
        //base cases
       
        if(i==-1|| i==m || j==-1 || j==n) return;
        if(vis[i][j]==1 ) return;
        //if word is found
         if (idx == word.size() - 1 && board[i][j] == word[idx]) {
            res = true;
            return;
}

        //if mismatch
        if(word[idx]!= board[i][j])return;
        
        //explore current cell
            vis[i][j]=1;
           
            //go up
            existHelper(board, word, i-1,j, idx+1, res, vis);
            if(res ==true)return;
            //go down
            existHelper(board, word, i+1,j, idx+1, res, vis);
            if(res ==true)return;
            //go left
            existHelper(board, word, i,j-1, idx+1, res, vis);
            if(res ==true)return;
            //go right
            existHelper(board, word, i,j+1, idx+1, res, vis);
            if(res ==true)return;           
            vis[i][j]=0;
        }

    bool exist(vector<vector<char>>& board, string word) {
    
        int m= board.size();
        int n= board[0].size();
        
        vector<vector<bool>> vis(m, vector<bool>(n, 0)); // Initialize with 0

        bool res = false;
        for(int i=0; i<m;i++){
            for(int j=0; j<n;j++){
                existHelper(board, word, i, j, 0, res, vis);
            }
        }
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}