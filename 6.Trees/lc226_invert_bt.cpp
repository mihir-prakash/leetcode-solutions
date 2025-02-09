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
    TreeNode* invertTreeHelper(TreeNode* &root){
        //base case
        if(root==NULL)return NULL;
        //do a dfs and for each node swap its lc and rc. I trust this recursvie function to swap tree rooted at root
        TreeNode* left = invertTreeHelper(root->left);
        TreeNode* right = invertTreeHelper(root->right);
        //swap lst & rst
        root->left = right;
        root->right = left;

        return root;

    }
    TreeNode* invertTree(TreeNode* root) {
        return invertTreeHelper(root);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}