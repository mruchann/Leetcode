class Solution {
public:
    const long long mod = 1e9+7;
    long long totalSum = 0, result = 1;

    long long Sum(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        else
        {
            long long l = Sum(root->left);
            long long r = Sum(root->right);
            long long subTreeSum = root->val + l + r;
            result = max(result, (totalSum - subTreeSum) * subTreeSum);
            return subTreeSum;
        }
    }
    int maxProduct(TreeNode* root) 
    {
        totalSum = Sum(root), Sum(root);
        return result % mod;
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
