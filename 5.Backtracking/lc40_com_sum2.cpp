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
    void combinationSum2Helper(vector<int>& candidates, int target, int i, vector<int>&curr, vector<vector<int>>&res){
        int n= candidates.size();
        //base case
        if(target==0){
            res.push_back(curr);
            return;
        }
        if(i==n || target<0){
            return;
        }

        //choice: include ith element     
           
        curr.push_back(candidates[i]);
        combinationSum2Helper(candidates, target-candidates[i], i+1, curr, res);
        curr.pop_back(); // backtrack
          
        
        //choice: not include
        //skip duplicates
        while(i+1<n && candidates[i+1]==candidates[i])i++;
        combinationSum2Helper(candidates, target, i+1, curr, res);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>curr;
       
        sort(candidates.begin(), candidates.end());
        combinationSum2Helper(candidates, target,0, curr, res);
        return res;

    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}