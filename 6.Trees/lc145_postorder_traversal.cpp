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
    void postorderTraversal(TreeNode* root, vector<int>&res){
        //I trust that this function will do a Post order traversal of the tree rooted at root
        //base case
        if(root==NULL)return;
        postorderTraversal(root->left, res);
        postorderTraversal(root->right, res);
        res.push_back(root->val);

    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        postorderTraversal(root, res);
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}