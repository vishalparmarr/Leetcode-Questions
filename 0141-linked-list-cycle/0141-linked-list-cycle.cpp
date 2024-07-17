/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    bool isCycle(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && slow != NULL) {
            
            fast = fast -> next;
            if(fast != NULL)
                fast = fast -> next;
            
            slow = slow -> next;
            
            if(slow == fast)
                return true;
        }
        
        return false;
    }
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL || head -> next == NULL)
            return false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && slow != NULL) {
            
            fast = fast -> next;
            if(fast != NULL)
                fast = fast -> next;
            
            slow = slow -> next;
            
            if(slow == fast)
                return true;
        }
        
        return false;
    }
};