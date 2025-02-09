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
class Solution {
public:
    bool isSameTreeHelper(TreeNode* &p, TreeNode* &q) {
        //do a dfs and check for each node ->compare val of both. if not same return false else keep traversing.
        if(p==NULL && q==NULL)return true; //if both are null
        if(!p || !q)return false; //if one is null and one is not
        
        if(p->val != q->val)return false;      //if the values are not same
        return isSameTreeHelper(p->left, q->left) && isSameTreeHelper(p->right, q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSameTreeHelper(p,q);
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}