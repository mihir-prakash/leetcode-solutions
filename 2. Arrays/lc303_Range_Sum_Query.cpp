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
class NumArray {
public:
    vector<int>nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        int n = nums.size();
       vector<int>pre(n);
       for(int i=0; i<n;i++){
        pre[i]= i==0?nums[i]:pre[i-1]+nums[i];
       }
       //[1,2,3,4] -> [1,3,6,10]
       if(left==0)return pre[right];
       return (pre[right]- pre[left-1]);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}