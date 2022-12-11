class Solution {
public:
    const long long mod = 1e9+7;
    long long totalSum = 0, result = 1;
    long long Sum(TreeNode* root)
    {
        if (root== nullptr)
            return 0;
        else
            return root->val + Sum(root->left) + Sum(root->right);
    }
    long long Traverse(TreeNode* root) // calculates subTreeSum and result
    {
        if (root == nullptr)
            return 0;
        else
        {
            long long l = Traverse(root->left);
            long long r = Traverse(root->right);
            long long subTreeSum = root->val + l + r;
            result = max(result, (totalSum - subTreeSum) * subTreeSum);
            return subTreeSum;
        }
    }
    int maxProduct(TreeNode* root) 
    {
        totalSum = Sum(root);
        Traverse(root);
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
