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
    int ans = INT_MIN;
    
    int maxDepth(TreeNode* root) {
        if (root == NULL || root == nullptr)
            return 0;
        
        dfs(root, 0);
        return ans;
    }
    
    void dfs(TreeNode* node, int path) {
        if (node->left == nullptr && node->right == nullptr)
            ans = max(path + 1, ans);
        
        else {
            if (node->right != nullptr)
                dfs(node->right, path + 1);
            
            if (node->left != nullptr)
                dfs(node->left, path + 1);
        }
    }
};
