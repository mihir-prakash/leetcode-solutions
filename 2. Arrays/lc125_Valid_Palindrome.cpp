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
    bool isPalindrome(string s) {
        int n= s.size();
        int l=0, r=n-1;
        
        while(l<=r){
            while(!isalnum(s[l]) && l<r) l++;
            while (!isalnum(s[r]) && l<r) r--;
            
            if(tolower(s[l])!=tolower(s[r]))return false;
            else {
                l++;
                r--;
            }           
        }
        return true;        
    }
};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}