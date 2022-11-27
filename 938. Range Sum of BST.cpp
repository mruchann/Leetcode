class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        int sum = 0;
        accumulate(root,low, high, sum);
        return sum;
    }
    
    void accumulate(TreeNode* root, int& low, int& high, int& sum)
    {
        if (root != nullptr)
        {
            if (root->val >= low && root->val <= high)
                sum += root->val;
            accumulate(root->left, low, high, sum);
            accumulate(root->right, low, high, sum);
        }
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
