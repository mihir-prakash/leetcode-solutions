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
    // int findh(TreeNode* root){
    //     return root==NULL?0:max(findh(root->left), findh(root->right))+1;
    // }
    int isBalancedHelper(TreeNode* root, bool &isB){
        // //visit each node (dfs) and see the difference of heights on its lst and rst
        // //base case
        // if(root==NULL)return true;
        // //current node
        // int lh = findh(root->left);
        // int rh = findh(root->right);
        // if(abs(lh-rh)>1)return false;
        // //process lst & rst
        // return isBalancedHelper(root->left) && isBalancedHelper(root->right);

        //Method-2: Supercharge our recursive function --> No need of separate height finder
        //base case
        if(root==NULL)return 0;
        int lh = isBalancedHelper(root->left, isB);
        int rh = isBalancedHelper(root->right, isB);

        if(abs(lh-rh)>1)isB=false;

        return max(lh,rh)+1;

    }
    bool isBalanced(TreeNode* root) {
        bool isB=true;
        isBalancedHelper(root, isB);
        return isB;
    } 
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}