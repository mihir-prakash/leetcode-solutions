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
    void letterCombinationsHelper(const string &digits, int i,unordered_map<char, vector<char>>&m, string &curr, vector<string> &res){
        //base case
        if(i==digits.size()){
            res.push_back(curr);
            return;
        }
        //pick an element(no) and for that we will have 3 or 0 choices --> and then recursively explore other numbers in digits string, 
        //backtrack and then go to choice 2:

        //choices: for each element of string we have 3 choices 2 --> a,b,c
        for( char ch: m[digits[i]]){
            curr.push_back(ch); //let's say we pick a
            letterCombinationsHelper(digits, i+1,m,curr, res); //recursively explore combinations after this for this a
            curr.pop_back(); //backtrack before we move to next
        }
       
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {}; 
        unordered_map<char, vector<char>>m = {            
            {'2', {'a', 'b', 'c'}},
            {'3', {'d', 'e', 'f'}},
            {'4', {'g', 'h', 'i'}},
            {'5', {'j', 'k', 'l'}}, 
            {'6', {'m', 'n', 'o'}}, 
            {'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}}, 
            {'9', {'w', 'x', 'y', 'z'}}
        };
        vector<string>res;
        string curr="";
        letterCombinationsHelper(digits, 0, m, curr, res);
        return res;
    }
};
/*
here we are taking ith char in string digits, then going to the map for that char, and exploring all the 3 choices(a,b,c) and their subsequent combinations with i+1 char.
*/
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}