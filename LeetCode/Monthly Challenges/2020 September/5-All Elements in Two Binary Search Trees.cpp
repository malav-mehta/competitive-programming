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
    vector<int> r;
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        dfs(root1); dfs(root2);
        sort(r.begin(), r.end());
        return r;
    }
    
    void dfs(TreeNode* t) {
        if (t) {
            r.push_back(t->val);
            dfs(t->left);
            dfs(t->right);
        }
    }
};
