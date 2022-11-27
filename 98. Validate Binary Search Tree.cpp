class Solution {
public:
    bool isValidBSTHelper(TreeNode* root, long long lower_bound, long long upper_bound)
    {
        if (root == nullptr) 
            return true;
            
        else if (root->val <= lower_bound || root->val >= upper_bound) 
            return false;
        
        return isValidBSTHelper(root->left, lower_bound, root->val) 
            && isValidBSTHelper(root->right, root->val, upper_bound); 
    }
    
    bool isValidBST(TreeNode* root) 
    {
        return isValidBSTHelper(root, LLONG_MIN, LLONG_MAX);
    }
};

class Solution {
public:
    bool isSubtreeLesser(TreeNode* root, int value)
    {
        if (root == nullptr) return true;
        
        if (root->val >= value)
            return false;
        
        return isSubtreeLesser(root->left, value) 
            && isSubtreeLesser(root->right, value);
    }
    
    bool isSubtreeGreater(TreeNode* root, int value)
    {
        if (root == nullptr) return true;
        
        if (root->val <= value)
            return false;
        
        return isSubtreeGreater(root->left, value) 
            && isSubtreeGreater(root->right, value);
    }
    
    bool isValidBST(TreeNode* root) 
    {
        if (root == nullptr) return true;
        
        return isSubtreeLesser(root->left, root->val) // root value is greater than all the nodes in the left
            && isSubtreeGreater(root->right, root->val) // root value is smaller than all the nodes in the right
            && isValidBST(root->left) // all subtrees are also BST
            && isValidBST(root->right); // all subtrees are also BST
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
