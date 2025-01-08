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
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int ideal_sum = n*(n+1)/2;
        int sum=0;
        for(int num: nums){
            sum+=num;
        }
        return (ideal_sum-sum);
    }
};



int main() {
    cout << "Hello, World!" << endl;
    return 0;
}