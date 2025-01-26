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
    int search(vector<int>& nums, int target) {
        //rotated sorted array has 2 sorted regions
        //Let's first figure out in which region our target element & mid is. They should be in same region for us to apply BS

        int n = nums.size();
        int s=0, e = n-1;
        int lastEle = nums[e];

        while(s<=e){
            int mid = s+(e-s)/2;
            //case1: Target is in R1, and mid is in R2
            if(target>lastEle && nums[mid]<=lastEle){
                //move search space towards R1 (left)
                e =mid-1;
            }
            //case2: Target is in R2, Mid is in R1
            else if(target<=lastEle && nums[mid]>lastEle){
                s = mid+1;
            }else{
                //case3: both are in same region --> We can apply BS
                if(nums[mid]==target)return mid;
                else if(nums[mid]<target)s = mid+1;
                else e = mid-1;
            }
        }
        return -1;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}