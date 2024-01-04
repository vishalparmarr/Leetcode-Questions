class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            
            if(nums[mid] == target)
                return mid;
            
            if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
            
            mid = start + (end - start) / 2;
        }
        return -1;
    }
};