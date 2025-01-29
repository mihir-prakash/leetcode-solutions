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
    void subsetsHelper(vector<int>& nums, int i, vector<int>&curr, vector<vector<int>>&res ){
        int n = nums.size();
        //base case
        if(i==n){
            res.push_back(curr);
            return;
        }
        //choice-1: include ith element
        curr.push_back(nums[i]);
        //recursively explore
        subsetsHelper(nums, i+1, curr, res);
        curr.pop_back(); //backtrack

        //choice-2: Not include
        subsetsHelper(nums, i+1, curr, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>curr = {};
        subsetsHelper(nums, 0, curr, res);
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}