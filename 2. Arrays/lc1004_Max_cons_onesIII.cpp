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
    int longestOnes(vector<int>& nums, int k) {
        //valid window --> if # of zeros is <=k
        int n = nums.size();
        int zeros = 0;
        int l=0;
        int res=0;
        for(int r=0;r<n;r++){
            //expand window
            if(nums[r]==0)zeros++;
            //make window valid again
            while(zeros>k){
                if(nums[l]==0)zeros--;
                l++;
            }
            //calculate length of valid window
            res = max(res, r-l+1);
        }
        return res;
        
    }
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
