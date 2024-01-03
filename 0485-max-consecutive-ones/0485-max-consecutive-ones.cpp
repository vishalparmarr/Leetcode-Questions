class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int overall = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if(nums[i] == 1)
                count++;
            else
                count = 0;
            if(overall < count)
                overall = count;
        }
        return overall;
    }
};