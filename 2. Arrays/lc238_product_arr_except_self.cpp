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
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suff(n);
        vector<int>ans(n);
        //populate the pre and suff arrays
        for(int i=0; i<n;i++){
            pre[i]= i==0?nums[i]:pre[i-1]*nums[i];
        }
        for(int i=n-1; i>=0;i--){
            suff[i]= i==n-1?nums[i]:suff[i+1]*nums[i];
        }
        //using these 2 arrays to populate the ans array
        for(int i=0; i<n;i++){
            if(i==0){
                ans[i] = suff[i+1];
            }else if(i==n-1){
                ans[i]= pre[i-1];
            }else{
                ans[i] = pre[i-1]*suff[i+1];
            }
        }
        return ans;
        

    }
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}