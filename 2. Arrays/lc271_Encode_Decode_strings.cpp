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

    string encode(vector<string>& strs) {
        string res;
        for(string s: strs){
            int len = s.size();
            res+= to_string(len)+ "#"+ s;
        }
        return res;
    }

    vector<string> decode(string s) {
        //when you see a number keep incrementing j till you find delimiter, that will be count
        //so after the delimiter (j) move till count number of characters and add it to res
        vector<string>res;
        string word="";
        int n= s.size();
        int i=0;
        while(i<s.size()){  
            int j=i;          
            while(s[j]!='#'){
                j++;
            }
            //so from i to j will be a number
            int count = stoi(s.substr(i, j-i+1));
            word += s.substr(j+1, count);
            res.push_back(word);
            word = "";
            i= j+1+count;            
        }
        return res;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}