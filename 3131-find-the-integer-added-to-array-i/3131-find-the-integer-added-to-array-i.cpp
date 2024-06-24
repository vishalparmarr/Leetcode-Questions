class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
    
        sort(nums2.begin(), nums2.end());   
        sort(nums1.begin(), nums1.end());  
        return nums2[0] - nums1[0];
    }
};