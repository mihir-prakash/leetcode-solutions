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
//Kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int res= INT_MIN;
        for(int num:nums){
            currSum+=num;
            res = max(currSum, res);
            if(currSum<0)currSum=0;
        }
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}