class Solution {
private:
    
    int first(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            
            if(nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
            
            mid = start + (end - start) / 2;  
        }
        return ans;
    }
    
    int last(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            
            if(nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
            
            mid = start + (end - start) / 2;  
        }
        return ans;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
        vector <int> ans;
        ans.push_back(first(nums, target));
        ans.push_back(last(nums, target));
        return ans;
    }
};