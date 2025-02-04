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
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int ps, int pe, int is, int ie){
        //we will give the index ranges for lst and rst to this function and it will create tree
        //base case
        if(is>ie || ps>pe)return NULL;
        //find root
        int rootEle = preorder[ps];
        TreeNode * root = new TreeNode(rootEle);
        //finding how many elements in lst
        int i=is;
        int nodeLeftCount =0;
        while(inorder[i]!=rootEle){
            i++;
            nodeLeftCount++;
        }
        //now i points to rootEle
        //Determine index ranges
        //lst
        int lst_is = is , lst_ie= i-1;
        int lst_ps = ps+1 , lst_pe= ps+ nodeLeftCount;

        //rst
        int rst_is = i+1 , rst_ie= ie;
        int rst_ps = ps+ nodeLeftCount+1  , rst_pe= pe;

        root->left = buildTreeHelper(preorder, inorder, lst_ps, lst_pe, lst_is, lst_ie);
        root->right = buildTreeHelper(preorder, inorder, rst_ps, rst_pe, rst_is, rst_ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int m = preorder.size();
        int n = inorder.size();
        return buildTreeHelper(preorder, inorder, 0,m-1,0,n-1 );
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}