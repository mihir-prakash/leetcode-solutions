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
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted_arr = nums;
        sort(sorted_arr.begin(), sorted_arr.end());
        int n= nums.size();
        int s=-1,e=-2;
        for(int i=0; i<n;i++){
            if(s==-1 && sorted_arr[i]!=nums[i]){
                //means first mismatch
                s = i;
                e=s;
            }else if(sorted_arr[i]!=nums[i]){
                e=i;
            }
        }
        return e-s+1;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
