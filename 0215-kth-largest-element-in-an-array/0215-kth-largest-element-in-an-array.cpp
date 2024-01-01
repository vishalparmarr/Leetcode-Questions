class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
         
        cout << nums.size();
        return nums[nums.size() - k];
    }
};