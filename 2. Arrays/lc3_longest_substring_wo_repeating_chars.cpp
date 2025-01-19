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
    int lengthOfLongestSubstring(string s) {
        //valid window --> where freq of each char is =1
        unordered_map<char, int>m;
        int l=0;
        int n = s.size();
        int res=0;
        for(int r=0; r<n;r++){
            //expand the window
            m[s[r]]++;

            //make window valid
            while(m[s[r]]>1){                
                m[s[l]]--;               
                l++;
            }
            //find length of valid window
            res = max(res, r-l+1);
        }
        return res;
    }
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}