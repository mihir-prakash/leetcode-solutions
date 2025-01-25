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
    bool isPowerOfThreeHelper(int n){
        if(n==1)return true;    
        if(n<=0 || n%3!=0)return false;         
        return isPowerOfThreeHelper(n/3);
    }
    bool isPowerOfThree(int n) {
        return isPowerOfThreeHelper(n);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}