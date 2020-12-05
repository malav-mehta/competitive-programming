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
    int r = 0;
    int sumRootToLeaf(TreeNode* root) {
        dfs(root, 0);
        return r;
    }
    
    void dfs(TreeNode* t, int s) {
        if (t) {
            s = (s << 1) + t->val;
            if (!t->left && !t->right) r += s;
            dfs(t->left, s);
            dfs(t->right, s);
        }
    }
};
