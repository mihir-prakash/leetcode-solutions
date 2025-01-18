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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>m; //{"ate": [eat, ate]}
        vector<vector<string>>res;
        for(string word:strs){
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());
            m[sorted_word].push_back(word);
        }
        for(auto p:m){
            res.push_back(p.second);
        }
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}