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
    void iotraversal(TreeNode * root, vector<int>&ans){
        //base case
        if(root==NULL)return;
        iotraversal(root->left, ans);
        ans.push_back(root->val);
        iotraversal(root->right, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        //The io traversal of a bst is increasing sorted array
        vector<int>ans;
        iotraversal(root, ans);
        return ans[k-1];

    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}