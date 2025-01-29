\#include <iostream>
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
class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>>m; 
    /*
        {
            key: [{timestamp, value}, {time2, value2}]
        }
    */
   
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        // we have to find value of t <= timestamp
        auto &v = m[key]; //v is a reference to array to avoid copying the array (O(n) time)
        //Hence do a BS on this vector v to find t <= timestamp
        int n= v.size();
        int s= 0, e = n-1;
        string ans = "";
        while(s<=e){
            int mid = s+(e-s)/2;
            if(v[mid].first>timestamp)e = mid-1;
            else{
                ans = v[mid].second;
                s = mid+1;
            }
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}