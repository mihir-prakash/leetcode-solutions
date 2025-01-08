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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_so_far = 0;
        int curr_count=0;
        for(int num: nums){
            if(num==1)curr_count++;
            else{
                max_so_far = max(max_so_far, curr_count);
                curr_count=0;
            }
        }
        max_so_far = max(max_so_far, curr_count);
        return max_so_far;
    }
};



int main() {
    cout << "Hello, World!" << endl;
    return 0;
}