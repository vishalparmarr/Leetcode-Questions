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
    
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        while(curr != nullptr) {
            
             if(curr -> val != val) {
                prev = curr;
                curr = curr -> next;
                continue;
            }
            
            if(curr == head) {
               head = curr -> next;
                delete curr;
                curr = head;
                continue;
            }
           
             prev -> next = curr -> next;
            curr = prev -> next;
        }
        return head;
    }
};