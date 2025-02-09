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
    void goodNodesHelper(TreeNode* root, int &count , int value){
        //do a dfs from root. if current node is <=root then do count++
        //base case
        if(root==NULL)return;
        if(root->val >= value) {
            value = root->val; //update max Value
            count++;
        }
        
        goodNodesHelper(root->left, count, value);
        goodNodesHelper(root->right, count, value);
        
    }
    int goodNodes(TreeNode* root) {
        int value = root->val;
        int count=0;
        goodNodesHelper(root, count, value);
        return count;
    }
};
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}