class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int sum = 0;
        int size = nums.size() - 1;
        
        int maxi = *max_element(nums.begin(), nums.end());
        
        while(k--) {
            sum += maxi;
            maxi++;
        }
        return sum;
    }
};