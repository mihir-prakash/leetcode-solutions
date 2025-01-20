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
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;        
        int n= nums.size();
        for(int i=0; i<n;i++){
            //avoid duplicate i's
            if(i>0 && nums[i-1]==nums[i])continue;
            int l=i+1 , r= n-1;
            while(l<r){                
                int threeSum = nums[i]+ nums[l]+ nums[r];
                if(threeSum==0){
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    //avoid duplicate l's
                    while(l<r && nums[l-1]==nums[l])l++;
                    //avoid duplicate r's
                    while(l<r && nums[r+1]==nums[r])r--;
                }
                else if(threeSum<0)l++;
                else r--;
            }
        }
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}