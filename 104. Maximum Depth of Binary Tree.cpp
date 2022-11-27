class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if (root == nullptr)
            return 0;
        else if (root->left == nullptr && root->right == nullptr) // leaf node
            return 1;
        else
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;  
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
