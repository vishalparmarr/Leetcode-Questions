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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == nullptr)
            return list2;
        
        if(list2 == nullptr)
            return list1;
        
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        
        while(list1 != nullptr && list2 != nullptr) {

        if(list1 -> val < list2 -> val) {
            temp -> next = list1;
            temp = list1;
            list1 = list1 -> next;
        }
        else {
            temp -> next = list2;
            temp = list2;
            list2 = list2 -> next; 
        }
    }

    while(list1 != NULL) {
        temp -> next = list1;
        temp = list1;
        list1 = list1 -> next;
    }

    while(list2 != NULL) {
        temp -> next = list2;
        temp = list2;
        list2 = list2 -> next; 
    }
        
    return ans -> next;
    }
};