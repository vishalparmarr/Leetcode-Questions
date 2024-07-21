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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == nullptr || head -> next == nullptr)
            return nullptr;
        
        ListNode* curr = head;
        int count = 1;
        ListNode* prev = nullptr;
        
        while(curr -> next != nullptr) {
            prev = curr;
            curr = curr -> next;
            count++;
        }
        
        int remove = count - n;
        
        if(remove == 0) {
            return head -> next;
        }
                
        curr = head;
        prev = curr;
        
        while(remove != 0) {
            prev = curr;
            curr = curr -> next;
            remove--;
        }
    
        if(curr == nullptr)
             prev -> next = curr;
        else
            prev -> next = curr -> next;
        
        
        return head;
    }
};