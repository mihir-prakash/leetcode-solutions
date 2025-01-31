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
    void combinationSumHelper(vector<int>& candidates, int target, int i, vector<int>&curr, vector<vector<int>>&res){
        //base cases
        if(target==0){
            res.push_back(curr);
            return;
        }
        if(i==candidates.size() || target<0)return;

        //choice:1 include ith element
        curr.push_back(candidates[i]);
        combinationSumHelper(candidates, target-candidates[i],i, curr, res);
        curr.pop_back(); //backtrack

        //choice-2: Not include
        combinationSumHelper(candidates, target,i+1, curr, res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>curr;
        combinationSumHelper(candidates, target,0,curr, res);
        return res;

    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}