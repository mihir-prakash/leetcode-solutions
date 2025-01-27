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
    int cost(int cap, vector<int>& weights){
        int days =1;
        int currLoad=0;
        for(int w:weights){
            if(currLoad+w>cap){
                days++;
                currLoad=w;
            }else{
                currLoad+=w;
            }
        }
        return days;       
        
    }

    int shipWithinDays(vector<int>& weights, int days) {        
        int sum=0; int ans = 0;
        int minWeight = INT_MIN;
        for(int w:weights){
            sum+=w;
            minWeight = max(minWeight, w);
        }
        int s = minWeight, e =sum;
        while(s<=e){
            int mid = s+(e-s)/2;
            int time = cost(mid, weights);
            cout<<time<<" ";
            if(time<=days){
                ans = mid;
                e = mid-1;
            }else s = mid+1;
        }
        return ans;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}