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
    int lastStoneWeight(vector<int>& stones) {
        // we have to find out heaviest 2 stones --> Strike: Max Heap
        priority_queue<int>q;
        for(int num: stones){
            q.push(num);
        }
        while(q.size()>1){
            int y = q.top();
            q.pop();
            int x = q.top();
            q.pop();
            if(y>x)q.push(y-x);
        }
        if(q.empty())return 0;
        else return q.top();
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}