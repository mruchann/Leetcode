/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if (!head) return nullptr;
        
        ListNode *slow = head, *fast = head; // two pointers technique
        
        while (fast && fast->next) // we shouldn't delete this end because at the final check, we'll get segfault. 
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
