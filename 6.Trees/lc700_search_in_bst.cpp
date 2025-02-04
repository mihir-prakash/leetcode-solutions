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
    TreeNode* searchBSTHelper(TreeNode* root, int val){
        if(root==NULL)return NULL;
        if(val<root->val){
            return searchBSTHelper(root->left, val);
        }else if(val == root->val){
            return root;
        }else{
            return searchBSTHelper(root->right, val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return searchBSTHelper(root, val);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}