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
    TreeNode* lowestCommonAncestorHelper(TreeNode* root, TreeNode* p, TreeNode* q){
        //I trust my function will find LCA of p & q in the tree rooted at root
        //base case
        //1. p & q are at opposite side of root -->root will be LCA
        if(p->val < root->val && q->val > root->val)return root;
        else if(p->val > root->val && q->val < root->val)return root;

        //2. The current node is either p or q
        if(root->val ==p->val ||root->val ==q->val)return root;

        //3. They are on same side of root
        //left side -->keep looking on lst
        if(p->val < root->val && q->val < root->val)return lowestCommonAncestorHelper(root->left,p,q);
        else return lowestCommonAncestorHelper(root->right,p,q);

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lowestCommonAncestorHelper(root, p,q);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}