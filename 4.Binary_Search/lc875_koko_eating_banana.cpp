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
    long long timeTakenToEatBananas(int k, vector<int>& piles){
        long long time=0;
        for(int num: piles){            
            time += ceil((double)num / k); 
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=1;
        int maxSpeed= INT_MIN;
        for(int num: piles){
            maxSpeed = max(maxSpeed, num);
            
        }
        //k will be in this range
        int s = 1, e = maxSpeed;
        while(s<=e){
            long long mid = s+(e-s)/2;
            long long time = timeTakenToEatBananas(mid, piles);
            if(time<=h){
                ans = mid;
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return ans;
        
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}   