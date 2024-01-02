class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set <int> s1;
        int n = nums.size();
        
        for (int i = 0; i < n; i++){
            s1.insert(nums[i]);
        }
        
        int k = s1.size();
         
        nums.clear();
        for(auto i:s1)
        {
           //int k = *i;
           nums.push_back(i);
        }
        return k;
    }
};