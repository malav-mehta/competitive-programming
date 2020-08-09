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
    map<int, vector<pair<int, int>>> mp;
    vector<vector<int>> ans;

    void dfs(TreeNode* t, int x, int y) {
        if (t != nullptr) {
            mp[x].push_back({ y, t->val });
            dfs(t->left, x - 1, y + 1);
            dfs(t->right, x + 1, y + 1);
        }
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);

        for (auto it : mp) {
            sort(it.second.begin(), it.second.end());
            vector<int> tmp;
            for (auto p : it.second) {
                tmp.push_back(p.second);
            }

            ans.push_back(tmp);
        }

        return ans;
    }
};