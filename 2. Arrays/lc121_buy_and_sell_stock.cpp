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
    int maxProfit(vector<int>& prices) {
        int min_so_far = INT_MAX;
        int maxProfit = 0;
        for(int price:prices){
            if(price>min_so_far){
                int currProfit = price - min_so_far;
                maxProfit = max(maxProfit, currProfit); 
            }
            min_so_far = min(min_so_far, price);            
        }
        return maxProfit;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}