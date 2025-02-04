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
    int sum=0;
public:
    void bstToGstHelper(TreeNode* root){
        //base case
        if(root==NULL)return;
        //rst
        bstToGstHelper(root->right);
        //current node
        sum+= root->val;
        root->val = sum;
        //lst
        bstToGstHelper(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        bstToGstHelper(root);
        return root;
    }
};
/*
Right subtree first ensures that we start with the largest values.
Maintaining a cumulative sum allows each node to be updated correctly.
Left subtree last ensures that smaller values are updated using the new, modified sum.
*/
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}