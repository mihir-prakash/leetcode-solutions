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
    void permuteHelper(vector<int>& nums, vector<int>&curr, vector<bool>&used, vector<vector<int>>&res ){
        int n = nums.size();
        //base case
        if(curr.size()==n){
            res.push_back(curr);
            return;
        }
        //choices: add ith element to curr (if it's unused, and then recursively add all unused elements)
        for(int i=0; i<n;i++){
            if(!used[i]){
                used[i]= true;
                curr.push_back(nums[i]);
                //recursively add other elements
                permuteHelper(nums, curr, used, res);
                //backtrack
                curr.pop_back();
                used[i]= false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>curr;
        vector<bool>used(nums.size(),false);
        vector<vector<int>> res;
        permuteHelper(nums, curr, used, res);
        return res;
}
};
/*
so can we say that for each ith place:
we are building curr by adding ith element 
we are then recursively adding other non used element
before moving with other element to build curr ,  we backtrack
*/


//Method-2
//  void permuteHelper(vector<int>& nums, int i){
//         // I trust that this function will permute from i+1 till end
//         //till 0 to i i will fix the elements
        
//         if(i==nums.size()){
//             ans.push_back(nums);
//             return;
//         }
//         for(int j=i; j<nums.size(); j++){
//             swap(nums[i], nums[j]); //now ith position is fixed
//             permuteHelper(nums, i+1);
//             swap(nums[i], nums[j]); //undo the change/ backtrack

             
//         }
//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         permuteHelper(nums, 0);
//         return ans;
//     }
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
