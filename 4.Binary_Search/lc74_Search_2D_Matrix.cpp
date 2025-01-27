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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row_to_search = 0;
        //use bs to find the row in which we will search
        int t =0, b = m-1;
        while(t<=b){
            int mid = t+(b-t)/2;
            if(matrix[mid][n-1]>=target){
                row_to_search = mid;
                b = mid-1;
            }
            else if(matrix[mid][n-1]<target)t = mid+1;
           
        }
        //perform a bs on that row
        int s = 0, e = n-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(matrix[row_to_search][mid]==target)return true;
            else if(matrix[row_to_search][mid]<target)s = mid+1;
            else e= mid-1;
        }
        return false;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}