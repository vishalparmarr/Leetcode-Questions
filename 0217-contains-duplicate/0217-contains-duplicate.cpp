class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int j = 1;
        for(int i = 0; i < nums.size() - 1; i++) { {
                
                if(nums[i] == nums[j])
                    return true;
                else
                    j++;
            }
        }
        return false;
    }
};