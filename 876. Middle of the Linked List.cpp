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
        
        ListNode *middle, *end = head; // two pointers technique
        
        while (end && end->next) // we shouldn't delete this end because at the final check, we'll get segfault. 
        {
            middle = middle->next;
            end = end->next->next;
        }
        return middle;
    }
};
