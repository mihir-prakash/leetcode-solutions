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
    //recursive bsr
    int mySqrtHelper(int x, int l, int r){
        //i trust this function will give me sqrt(x) in range l to r
        //largest i  st f(i)<=x;
        //search space --> 0 to x/2
        long mid = l+(r-l)/2;
        //base cases       
      
        if(l>r)return r;
        if(mid*mid<=x) return mySqrtHelper(x, mid+1,r);
        else return mySqrtHelper(x, l, mid-1);
        
       
    }
    int mySqrt(int x) {
        // //linear search --> largest i st i*i <=x [O(N)]
        // long i=0; 
        // while(i*i<=x){
        //     i++;
        // }
        // return i-1;
        
        //iterative binary search --> [O(logn)]
        //find a=largest i st f(i)= i*i <=x; (F(i) is monotonic : So BS possible)
        
        // Search space --> 0 to x/2
        // int l= 0, r = x/2;
        // int ans=-1;
        // if(x==1) return 1;        
        // while(l<=r){
        //     long mid = l+(r-l)/2;
        //     if(mid * mid ==x)return mid;
        //     else if(mid*mid > x){
        //         //means we have to search on left --> no point in searching right of mid
        //         r = mid-1;
        //     }else if(mid*mid<x){
        //         //could be an ans
        //         ans = mid;
        //         l = mid+1;
        //     }
        // }
        // return ans;

        //recursive bs
        if(x==1)return 1;
        return mySqrtHelper(x, 0 ,x/2);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}