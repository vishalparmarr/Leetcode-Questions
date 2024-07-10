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
    bool isPalindrome(ListNode* head) {
        
        vector <int> ans;
        
        while(head != nullptr) {
            
            ans.push_back(head -> val);
            head = head -> next;
        }
        int i = 0;
        int j = ans.size() - 1;
        for(; i <= j; i++) {
            
            if(ans[i] != ans[j])
                break;
            
            j--;
        }
        
        if(i > j)
            return true;
        else
            return false;
    }
};