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
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int l=0;
        int n=nums.size();
        int currProd=1;
        int count=0;
        for(int r=0; r<n;r++){
            currProd*=nums[r];
            while(currProd>=k){
                currProd/=nums[l];
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}