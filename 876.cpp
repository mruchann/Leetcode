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
        
        
        int size = 0;
        ListNode *iterator = head;
        
        while (iterator != nullptr) // finding the size of the linked list.
        {
            size++;
            iterator = iterator->next;
        }
        int i = 0;
        while (i < size/2)
        {
            head = head->next;
            i++;
        }
        return head;
    }
};
