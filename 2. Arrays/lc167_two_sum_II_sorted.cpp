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
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0, r= n-1;
        while(l<=r){
            int currSum = nums[l]+nums[r];
            if(currSum==target)return {l+1, r+1};
            else if(currSum<target)l++;
            else r--;
        }
        return {};

    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}