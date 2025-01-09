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
    int maximumDifference(vector<int>& nums) {
        int smallest_so_far = nums[0];
        int max_diff = -1;
        for(int num:nums){
            if(num>smallest_so_far)max_diff = max(max_diff, num- smallest_so_far);
            smallest_so_far = min(num, smallest_so_far);
        }
        return max_diff;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}