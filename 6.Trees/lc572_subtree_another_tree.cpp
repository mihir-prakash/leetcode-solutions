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
    bool isSameTree(TreeNode *p, TreeNode *q){
        //base case
        if(!p && !q)return true;
        if(!p || !q)return false;
        //dfs
        if(p->val != q->val)return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //do a dfs and for each node check if it has the same subtree as subRoot

        if(root==NULL) return false;
        int left = isSameTree(root->left, subRoot);
        int right = isSameTree(root->right, subRoot);
        if(left || right)return true;
        if(isSameTree(root, subRoot))return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}