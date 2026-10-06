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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> out;
        
        if(!root) return out;

        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty())
        {
            int levelsize = static_cast<int>(que.size());
            vector<int> level;
            for(int i = 0; i < levelsize; ++i)
            {
                TreeNode* loc_node = que.front();
                que.pop();
                level.push_back(loc_node->val);
                if(loc_node->left) que.push(loc_node->left);
                if(loc_node->right) que.push(loc_node->right);
            }
            out.push_back(level);
        }
        return out;
    }
};