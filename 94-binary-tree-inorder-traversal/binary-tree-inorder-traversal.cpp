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
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> out;
        perf_inorder(root, out);
        return out;
    }

    void perf_inorder(TreeNode* root, std::vector<int>& vec)
    {
        if(!root) return;
        perf_inorder(root->left, vec);
        vec.push_back(root->val);
        perf_inorder(root->right, vec);
    }
};