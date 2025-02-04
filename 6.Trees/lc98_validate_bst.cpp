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
    bool isValidBSTHelper(TreeNode* root, long long s, long long e){
        //base case
        if(root==NULL)return true; 

        if(root->val <= s || root->val >=e)return false;
        return isValidBSTHelper(root->left, s, root->val) && isValidBSTHelper(root->right, root->val,e);
       
    }
    bool isValidBST(TreeNode* root) {
        long long s = LLONG_MIN;
        long long e = LLONG_MAX;
        return isValidBSTHelper(root, s, e);

    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}