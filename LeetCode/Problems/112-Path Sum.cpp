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
    vector<int> sums;
    
    bool hasPathSum(TreeNode* root, int sum) {
        if (root != NULL && root != nullptr) {
            dfs(root, 0);
            return find(sums.begin(), sums.end(), sum) != sums.end();
        }
        
        else {
            return false;
        }
    }
    
    void dfs(TreeNode* root, int sum) {
        if (root->left == nullptr && root->right == nullptr) {
            sums.push_back(sum + root->val);
        }
        
        else {
            if (root->left != nullptr) {
                dfs(root->left, sum + root->val);
            }
            
            if (root->right != nullptr) {
                dfs(root->right, sum + root->val);
            }
        }
    }
};
