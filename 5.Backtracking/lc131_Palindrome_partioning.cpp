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
    bool isPalindrome(string s){
        int n=s.size();
        int l= 0, r = n-1;
        while(l<=r){
            if(s[l]!= s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    void partitionHelper(string s, int i, vector<string>curr, vector<vector<string>>&res ){
        //form all substrings & keep adding to subset curr (vector<string>), if not palindrome --> return
        int n= s.size();
        //base case
        if(i==s.size()){
            res.push_back(curr);
            return;
        }

        //choices - For each index i, the choices are the possible indices j (where j lies from i to n-1), which determine the end of the substring.
    
        for(int j=i; j<n; j++){
            string temp = s.substr(i,j-i+1);
            if(isPalindrome(temp)){
                curr.push_back(temp);
                partitionHelper(s, j+1, curr, res);
                curr.pop_back(); //backtrack
            }
            
        }

    
        
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>curr;
        partitionHelper(s,0, curr, res);
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}