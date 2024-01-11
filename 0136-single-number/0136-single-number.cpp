class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int size = nums.size();
        if(nums.size() == 1)
            return nums[0];
        
        sort(nums.begin(), nums.end());
        
        if(nums[0] != nums[1])
            return nums[0];
        
        for(int i = 1; i < size; i++) {
                
                if(nums[i] != nums[i+1] && nums[i] != nums[i-1])
                    return nums[i];
            }
        return nums[size];
    }
};