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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    TreeNode* lowestCommonAncestorHelper(TreeNode* root, TreeNode* p, TreeNode* q) {
        //do a dfs and see do they lie on same or different side of root

        //base case
        if(root==NULL)return NULL;
        if(root->val ==p->val || root->val ==q->val)return root;
        TreeNode * left = lowestCommonAncestorHelper(root->left,p,q);
        TreeNode * right = lowestCommonAncestorHelper(root->right,p,q);

        //1. if p and q on opposite side
        if(left && right)return root;
        //2. if root is either p or q
        if(root->val ==p->val or root->val ==q->val)return root;
        //3. if on same side
        if(left) return left;
        else return right;


        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lowestCommonAncestorHelper(root, p ,q);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
