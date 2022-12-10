class Solution {
public:

    bool isCompleteTree(TreeNode* root) 
    {
        queue<TreeNode*> q;
        queue<TreeNode*> tq;
        q.push(root);
        while (!q.empty())
        {
            TreeNode* top = q.front();
            q.pop();
            tq.push(top);
            if (top != nullptr)
            {
                q.push(top->left);
                q.push(top->right);
            }
        }
        int n = tq.size();
        bool seen_null = false;
        for (int i = 0; i < n; i++)
        {
            if (tq.front() == nullptr)
                seen_null = true;
            else if (seen_null && tq.front() != nullptr)
                return false;
            tq.pop();
        }
        return true;
    }
};
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
