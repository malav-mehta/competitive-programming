/* 938. Range Sum of BST, 212 ms */

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
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        /*
        DFS of the tree to go through all values and add to the answer when the
        val of the current node falls into the required range.
        
        Time complexity: O(n) n = # of nodes
        Space complexity: O(h) h = height of tree
        */
        if (!root) return 0;
        dfs(root, L, R);
        return ans;
    }
    
    void dfs(TreeNode* root, int l, int r) {
        if (root) {
            if (l <= root->val && root->val <= r) ans += root->val;
            if (l < root->val) dfs(root->left, l, r);
            if (root->val < r) dfs(root->right, l, r);
        }
    }
};
