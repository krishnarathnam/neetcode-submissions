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
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int currentLevel = 0;

        while(true){
            int nodeAtLevel = q.size();

            if(nodeAtLevel == 0){
                return currentLevel;
            }

            while(nodeAtLevel > 0){
                TreeNode* element = q.front();
                q.pop();

                if(element->left != NULL) q.push(element->left);
                if(element->right != NULL) q.push(element->right);
                nodeAtLevel--;
            }

            currentLevel++;
        }
    }
};
