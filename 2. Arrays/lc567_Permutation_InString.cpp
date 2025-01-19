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
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        if(m>n)return false;
        //map of s1
        unordered_map <char, int>m1;

        for(char c: s1){
            m1[c]++;
        }

        //Take a window of size m and slide it over s2 & compare the map of that window with map of s1.
        
        //initial window os size m over s2
        unordered_map<char,int>m2;
        for(int i=0; i<m;i++){
            m2[s2[i]]++;
        }
        if(m1 == m2)return true;

        //slide it
        for(int st=1, en=m; en<n;st++, en++){
            m2[s2[st-1]]--;          
            //update the s2's map
            if(m2[s2[st-1]]==0){
                m2.erase(s2[st-1]);
            }
            m2[s2[en]]++;
            if(m1==m2)return true;
            
        }
        return false;

    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}