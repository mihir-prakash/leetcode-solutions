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
    double myPowHelper(double x, long long n){
        if(n==0)return 1.0;
        double partial_ans = myPowHelper(x,n/2);
        if(n%2==0) return partial_ans * partial_ans;
        else return partial_ans*partial_ans*x;
    }
    double myPow(double x, int n) {
        long long N = n;
        if(n>0) return myPowHelper(x,N);
        else {            
            return 1/myPowHelper(x, -N);
        }        
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}