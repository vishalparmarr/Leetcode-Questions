class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
    
        vector <int> arr; 
        sort(nums.begin(), nums.end());
        
        arr.push_back(nums[1]);
        arr.push_back(nums[0]);
    
        for (int i = 2; i < nums.size();) {
            
            arr.push_back(nums[i + 1]);
            arr.push_back(nums[i]);
            
            if(i < nums.size() - 1)
                i = i + 2;
            else
                i++;
        }
        return arr;
    }
};