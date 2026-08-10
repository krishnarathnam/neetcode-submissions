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
class Solution {
public:
    void t(TreeNode* root, vector<int>& mp){
        if(root == NULL) return;

        mp.push_back(root->val);
        t(root->left,mp);
        t(root->right,mp);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> mp;
        t(root,mp);
        return mp;
    }
};