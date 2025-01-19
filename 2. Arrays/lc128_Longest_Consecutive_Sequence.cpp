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
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet;
        for(int num:nums){
            numSet.insert(num);
        }
        //OR We can do 
        //unordered_set<int> numSet(nums.begin(), nums.end());

        //Now check for each num is it the beginning of a possible sequence? i.e num-1 doesn't exist
        int currLen=1;
        int maxLen=1;
        if(numSet.empty())return 0;
        for(int num: numSet){
            if(numSet.find(num-1)==numSet.end()){
                //it means num-1 doesn't exist
                int temp = num;
                while(numSet.find(temp+1)!=numSet.end()){
                    currLen++;
                    temp++;
                }
                maxLen = max(maxLen, currLen);
                currLen = 1;
            }
        }
        return maxLen;

    }
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}