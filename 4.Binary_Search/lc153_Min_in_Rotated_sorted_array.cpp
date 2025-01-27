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
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0, e = n-1;
        int lastEle = nums[n-1];
        int res=-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            //if mid is in R1
            if(nums[mid]> lastEle)s = mid+1;
            //if mid is in R2
            else if(nums[mid]<=lastEle){
                res = nums[mid];
                e = mid-1;
            } 
        }
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}