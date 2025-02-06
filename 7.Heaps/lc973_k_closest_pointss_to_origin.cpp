#include <iostream>
#include <vector>
#include <string>
#include <queue>
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
    int dist(int x, int y){
        int ans = x*x + y*y;
        return ans;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //if we push just distance from where we will get the points? Hence we will push pair {d,i} where i is index of that point
        priority_queue < pair<int, int> >q;
        vector<vector<int>>res;
        for(int i=0; i< points.size();i++){
            int x = points[i][0];
            int y = points[i][1];
            int d = dist(x,y);
            q.push({d, i});
            if(q.size()>k){
                q.pop();
            }
            
        }
        //now heap contains largest k elements with largest at top
        //put the corresponding points into res array
        while(!q.empty()){
            int idx = q.top().second;
            res.push_back(points[idx]);
            q.pop();
        }
        return res;

    }   
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}