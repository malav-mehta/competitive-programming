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
    int ans = 0;
    
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root, false);
        return ans;
    }
    
    void dfs(TreeNode* u, bool isleft) {
        if (u) {
            if (isleft && !u->left && !u->right) ans += u->val;
            dfs(u->left, true);
            dfs(u->right, false);
        }
    }
};
