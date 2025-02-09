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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        //do a level order traversal and update the map with latest
        map<int, int>m; //row: node val
        if(root==NULL)return {};
        queue<TreeNode *>q;
        q.push(root);
        m[0] = root->val;
        int row=0;
        while(!q.empty()){
            int sz= q.size();            
            for(int i=0; i<sz; i++){
                TreeNode * curr = q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                m[row] = curr->val;
            }
            row++;            
        }

        //traverse map
        vector<int>res;
        for(auto p: m){
            res.push_back(p.second);
        }
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}