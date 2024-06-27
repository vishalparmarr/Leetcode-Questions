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
    
    void insertAtTail(ListNode* &tail, int d) {
    
        ListNode* temp = new ListNode(d);
        tail -> next = temp;
        tail  = temp;
}
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* list3 = NULL;
        
        if(list1 == NULL && list2 == NULL)
            return NULL;
        
        if(list1 == NULL && list2 != NULL)
            return list2;
        
        if(list1 != NULL && list2 == NULL)
            return list1;
        
        if(list1 -> val <= list2 -> val) {
                list3 = new ListNode(list1 -> val);
                list1 = list1 -> next;    
        }
        else {
            list3 = new ListNode(list2 -> val);
            list2 = list2 -> next;
        }
        
        ListNode* tail = list3;
        ListNode* head = list3;
        while(list1 != NULL && list2 != NULL) {
            
            if(list1 -> val <= list2 -> val) {
                insertAtTail(tail, list1 -> val);
                list1 = list1 -> next;
            }
            else {
                insertAtTail(tail, list2 -> val);
                list2 = list2 -> next;
            }
        }
        
        while(list1 != NULL) {
            insertAtTail(tail, list1 -> val);
            list1 = list1 -> next;
        }
        
        while(list2 != NULL) {
            insertAtTail(tail, list2 -> val);
            list2 = list2 -> next;
        }
        return head;
    }
};