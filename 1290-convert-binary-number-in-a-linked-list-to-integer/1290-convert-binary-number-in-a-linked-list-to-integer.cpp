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
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        while(temp != 0){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        reverse(arr.begin(), arr.end());
        int ans = 0;

        for(int i=0 ; i<arr.size() ; i++){
            ans += arr[i] * pow(2,i);
        }
        return ans;
    }
};