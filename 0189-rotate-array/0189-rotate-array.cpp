class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();

        vector<int> temp(nums.size());
        k=k%n;
        for(int i=0;i<k;i++)
        {
            temp[i]=nums[i+n-k];
        }    
        
        int i=0;   
        for(int j=k;j<n;j++)
        {
            
            temp[j]=nums[i];
            i++;
        }
        nums=temp;
    }
};