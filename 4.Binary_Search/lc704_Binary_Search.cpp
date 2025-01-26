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
//Recursive Solution
// class Solution {
// public:
//     int searchHelper(vector<int>& nums, int target, int s, int e){
//         int mid = s+(e-s)/2;
//         //base case
//         if(s>e)return -1;
//         if(nums[mid]==target)return mid;

//         if(nums[mid]>target){
//             //search in left half
//             return searchHelper(nums, target, s, mid-1);
//         }else{
//             //search in right half
//             return searchHelper(nums, target, mid+1, e);
//         }
//     }
//     int search(vector<int>& nums, int target) {
//         int n= nums.size();
//         return searchHelper(nums, target, 0, n-1);
//     }
// };

//Iterative Solution
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s = 0, e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)s = mid+1;
            else e = mid-1;
        }
        return -1;
    }   
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}