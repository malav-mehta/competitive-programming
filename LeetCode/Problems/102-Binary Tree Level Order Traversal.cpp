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
    int mxDep = INT_MIN;
    vector<vector<int>> ans;
    
    void maxDepth(TreeNode* node, int path) {
        if (node->left == nullptr && node->right == nullptr)
            mxDep = max(path + 1, mxDep);
        
        else {
            if (node->right != nullptr)
                maxDepth(node->right, path + 1);
            
            if (node->left != nullptr)
                maxDepth(node->left, path + 1);
        }
    }
    
    void dfs(TreeNode* node, int path) {
        ans[path].push_back(node->val);
        
        if (node-> left != nullptr)
            dfs(node->left, path + 1);
        
        if (node->right != nullptr)
            dfs(node->right, path + 1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL || root == nullptr) {
            return ans;
        }
        
        maxDepth(root, 0);
        for (int i = 0; i < mxDep; ++i) {
            vector<int> tmp;
            ans.push_back(tmp);
        }
        
        dfs(root, 0);
        return ans;
    }
};
