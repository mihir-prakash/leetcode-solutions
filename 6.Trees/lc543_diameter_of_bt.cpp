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
    int diameterOfBinaryTreeHelper(TreeNode* root, int &res){
        // Find sum of lh & rh at each node and do dfs
        if(root==NULL)return 0;
        //this function returns height
        int lh = diameterOfBinaryTreeHelper(root->left, res);
        int rh = diameterOfBinaryTreeHelper(root->right, res);
        //process each node
        res = max(res,lh+rh);
        return max(lh, rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        diameterOfBinaryTreeHelper(root, res);
        return res;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}