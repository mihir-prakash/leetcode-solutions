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
    void preorderTraversal(TreeNode* root, vector<int>&res){
        //base case
        if(root==NULL)return;

        res.push_back(root->val);
        preorderTraversal(root->left, res);
        preorderTraversal(root->right, res);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        preorderTraversal(root, res);
        return res;
    }
    
};
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}