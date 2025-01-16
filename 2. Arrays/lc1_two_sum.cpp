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
        unordered_map<int, int>m;
        int n=nums.size();
        for(int i=0; i<n;i++){
            int diff = target-nums[i];
            auto it = m.find(diff);
            if(it != m.end()){
                return {i, m[diff]};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}