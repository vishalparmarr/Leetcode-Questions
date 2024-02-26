class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int elementSum = 0;
        int digitSum = 0;
        
        for(int i = 0; i < nums.size(); i++)
            elementSum += nums[i];
        
        int i = 0;
        while(i < nums.size()) {
            
                    while(nums[i] != 0) {
                    int digit = nums[i] % 10;
                    digitSum += digit;
                    nums[i] /= 10;
            }
            i++;
        }
        
        return abs(elementSum - digitSum);
    }
};