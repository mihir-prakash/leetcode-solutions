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
class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>>q;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int num: nums){
            q.push(num);
        }
    }
    
    int add(int val) {
        while(q.size()>k){
            q.pop();
        }
        q.push(val);
        if(q.size()>k)q.pop();
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}