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
    bool isAnagram(string s, string t) {
        unordered_map<char, int>m1;
        unordered_map<char, int>m2;
        for(char c: s){
            m1[c]++;
        }
        for(char c: t){
            m2[c]++;
        }
        return m1==m2;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}