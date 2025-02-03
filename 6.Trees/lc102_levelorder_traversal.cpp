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
    vector<vector<int>> levelOrder(TreeNode* root) {
    if(root==NULL)return {};
    vector<vector<int>>res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
    vector<int>level_wise;    
    int sz = q.size();    
    for(int i=0; i<sz; i++){
        TreeNode * candidate = q.front();
        if(candidate->left)q.push(candidate->left);
        if(candidate->right)q.push(candidate->right);
        level_wise.push_back(candidate->val); 
        q.pop();      
    }
    res.push_back(level_wise);        
    }
    return res;    
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}