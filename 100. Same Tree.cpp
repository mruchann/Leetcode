class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if (p == nullptr || q == nullptr)
        {
            if (p == nullptr && q == nullptr)
                return true;
            else
                return false;            
        }

        else if (p->val != q->val)
            return false;
        else
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
class Solution {
public:
    bool CheckEqual(TreeNode* p, TreeNode* q)
    {
        if (p == nullptr || q == nullptr)
        {
            if (p == nullptr && q == nullptr)
                return true;
            else
                return false;            
        }  
        else if (p->val != q->val)
            return false;
        else
            return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        queue<TreeNode*> P, Q;
        P.push(p); Q.push(q);
        while (!P.empty() && !Q.empty())
        {
            if (!CheckEqual(P.front(), Q.front()))
                return false;
            if (P.front() && Q.front()) // if both are not nullptr, enter!
            {
                P.push(P.front()->left);Q.push(Q.front()->left);
                P.push(P.front()->right);Q.push(Q.front()->right);
            }
            P.pop(); Q.pop();
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
