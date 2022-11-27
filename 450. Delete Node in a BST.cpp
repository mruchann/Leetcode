class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) 
    {      
// use return type to modify the previous addresses
        
        if (root == nullptr) // empty or not found
            return root; 
        
        else if (key < root->val)
            root->left = deleteNode(root->left, key);
        
        else if (root->val < key)
            root->right = deleteNode(root->right, key);
        
        else // found
        {
            if (root->left == nullptr && root->right == nullptr) // leaf node
            {
                delete root; 
                root = nullptr;
            }
            
            else if (root->left == nullptr || root->right == nullptr) // one child
            {
                TreeNode *temp = root;
                if (root->left == nullptr)
                    root = root->right;
                else if (root->right == nullptr)
                    root = root->left;
                delete temp; 
                temp = nullptr;
            }
            
            else // two child
            {
                TreeNode *temp = root->right;
                while (temp->left)
                    temp = temp->left;
                root->val = temp->val;
                root->right = deleteNode(root->right, root->val);
                
                //OR
                
                /*
                TreeNode *temp = root->left;
                while (temp->right)
                    temp = temp->right;
                root->val = temp->val;
                root->left = deleteNode(root->left, root->val);
                */
            }       
        }
        return root;
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
