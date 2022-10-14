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
    ListNode* deleteMiddle(ListNode* head) {
        
     if(head == NULL || head->next==NULL)
            return NULL;                      // If the linked list have only one node ar empty then delete the node and return NULL.
        ListNode* slow = head;
        ListNode* prev = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            prev=slow;         // Before moving slow to next pointer we have assigned it to previous node which keeps track of previous node.
            slow = slow -> next;
            fast = fast -> next -> next;
        }
          prev->next=slow->next;    // Deleting the middle node of the linked list.
        return head;
    }
};