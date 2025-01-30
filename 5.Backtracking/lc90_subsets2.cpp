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
    void subsetsWithDupHelper(vector<int>& nums, int i, vector<int>&curr, vector<vector<int>>&res){
        //base case
        int n= nums.size();
        if(i==n){
            res.push_back(curr);
            return;
        }
        //choices

        //include ith element
        curr.push_back(nums[i]);
        subsetsWithDupHelper(nums, i+1, curr, res);
        curr.pop_back(); //backtrack

        //not include ith element

        //skip duplicates
        while(i+1<n && nums[i]==nums[i+1])i++;
        subsetsWithDupHelper(nums, i+1, curr, res);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>curr;
        sort(nums.begin(), nums.end());
        subsetsWithDupHelper(nums, 0, curr, res);
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}