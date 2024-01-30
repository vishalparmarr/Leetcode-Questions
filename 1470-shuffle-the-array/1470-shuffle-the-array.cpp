class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector <int> ans;
        int j = 0;
        for(int i = 0; i <= nums.size() && n < nums.size(); i++) {
            
            if(i % 2 == 0 && i < n){
                ans.push_back(nums[j++]);
            }
            else
                ans.push_back(nums[n++]);
        }
        return ans;
    }
};