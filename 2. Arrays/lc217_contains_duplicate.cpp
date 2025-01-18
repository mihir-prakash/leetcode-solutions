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
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int num: nums){
            if(m.find(num)!=m.end())return true;
            m[num]++;
        }
        return false;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}