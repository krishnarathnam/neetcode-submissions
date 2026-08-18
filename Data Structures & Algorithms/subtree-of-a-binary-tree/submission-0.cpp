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
    void preOrderTraversal(TreeNode* root, vector<int>& res){
        if(root == NULL) {
            res.push_back(INT_MIN);
            return;
        }

        res.push_back(root->val);
        preOrderTraversal(root->left,res);
        preOrderTraversal(root->right,res);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<int> tree;
        vector<int> subtree;

        preOrderTraversal(root,tree);
        preOrderTraversal(subRoot,subtree);

        auto it = search(tree.begin(), tree.end(), subtree.begin(), subtree.end());
        return it != tree.end();
    }
};
