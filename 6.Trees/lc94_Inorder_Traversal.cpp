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

 // Definition for a binary tree node.
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
    void inorderTraversalHelper(TreeNode* root, vector<int>&res ){
        //base case
        if(root==NULL)return;

        //traverse lst
        inorderTraversalHelper(root->left, res);
        res.push_back(root->val);
        //traverse rst
        inorderTraversalHelper(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>res;
        inorderTraversalHelper(root, res);
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}