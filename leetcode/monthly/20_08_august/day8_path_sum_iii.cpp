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
    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr) {
            return 0;
        }

        else {
            return
                dfs(root, 0, sum)
                + pathSum(root->left, sum)
                + pathSum(root->right, sum);
        }
    }

    int dfs(TreeNode* u, int p, int& s) {
        if (u == nullptr) {
            return 0;
        }

        p += u->val;
        return
            (p == s)
            + dfs(u->left, p, s)
            + dfs(u->right, p, s);
    }
};