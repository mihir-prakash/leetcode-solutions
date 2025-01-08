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
    vector<int> runningSum(vector<int>& nums) {        
        int n= nums.size();
        vector<int>res(n);
        for(int i=0; i<n;i++){
            res[i] = i==0? nums[i]: res[i-1]+nums[i];
        }
        return res;
    }
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}