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
    int findKthLargest(vector<int>& nums, int k) {
        //one way is to use a max heap and pop out k-1 elements from it
        // priority_queue<int>q;
        // for(int num: nums){
        //     q.push(num);
        // }
        // while(k-1){
        //     q.pop();
        //     k--;
        // }
        // return q.top();


        //2nd way--> use min heap of size k so that at any point it contains only the k largest elements so far
        //once we have traverse through whole array it will contain the k largest elements of the array with the top denoting the kth largest element
        priority_queue<int>q;
        for(int num:nums){
            q.push(-num);
            if(q.size()>k){
                q.pop();
            }
        }
        return -q.top();

        /*
            priority_queue<int, vector<int>, greater<int>>q;
        for(int num: nums){
            q.push(num);             
            if(q.size()>k){
            q.pop();
            }
                       
        }        
        return q.top();       
        
        */

    } 
    //TC--> O(Nlogk) (log k for each element)
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}