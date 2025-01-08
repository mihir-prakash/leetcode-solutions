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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //2 pointer strategy
        int i=0, j=0;
        vector<int>aux;
        while(i<m && j<n){
            if(nums1[i]< nums2[j]){
                aux.push_back(nums1[i]);
                i++;
            }else{
                aux.push_back(nums2[j]);
                j++;
            }
        }
        //Push remaining elements
        while(i<m){
            aux.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            aux.push_back(nums2[j]);
            j++;
        }
        //copy from aux to nums1
        for(int i=0; i<m+n;i++){
            nums1[i]=aux[i];
        }


    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}