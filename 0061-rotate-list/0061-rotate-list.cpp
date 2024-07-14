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
private:
    
    int length(ListNode* head){
        
        int count = 1;
        while(head->next != NULL) {
            count++;
            head = head->next;
        }
        return count;
    }
    
    void rotation(ListNode* &head) {
        
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp -> next != nullptr) {
            prev = temp;
            temp = temp -> next;
        }
        
        temp -> next = head;
        prev -> next = nullptr;
        head = temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == nullptr || head -> next == nullptr || k == 0)
            return head;
        
         // Get length and keep a pointer to the tail end.
        ListNode *e = head;
        int length=1;
        while (e->next) {
            e = e->next;
            length++;
        }

        // Handle case where k > length
        k = k % length;
        
        while(k != 0) {
            rotation(head);
            k--;
        }
        
        return head;
    }
};