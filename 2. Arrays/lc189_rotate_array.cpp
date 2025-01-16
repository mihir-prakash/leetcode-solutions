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
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        //reverse whole array
        reverse(nums.begin(), nums.end());

        //reverse 1st k elements (0 to k-1 index)
        reverse(nums.begin(), nums.begin()+k);
        
        //reverse remaining elements
        reverse(nums.begin()+k, nums.end());
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
