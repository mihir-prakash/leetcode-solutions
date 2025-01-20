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
    int maxArea(vector<int>& height) {
        int n= height.size();
        int l=0, r= n-1;
        int area=-1;
        while(l<r){
            area = max(area, min(height[l], height[r])*(r-l));
            if(height[l]<height[r])l++;
            else r--;
        }
        return area;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}