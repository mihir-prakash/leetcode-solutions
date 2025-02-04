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
    void insertIntoBSTHelper(TreeNode* &root, int val){
        //base case
        if(root==NULL){
            TreeNode * newNode = new TreeNode(val);
            root = newNode;
            return;
        }
        if(val<root->val){
            insertIntoBSTHelper(root->left, val);
        }else insertIntoBSTHelper(root->right, val);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insertIntoBSTHelper(root, val);
        return root;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}