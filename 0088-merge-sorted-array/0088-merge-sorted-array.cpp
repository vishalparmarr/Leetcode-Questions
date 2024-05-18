class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a1=m-1,a2=n-1;
        int i=nums1.size()-1;
        while(i>=0){
            if(a1<0||a2<0)
            break;
            if(nums1[a1]>nums2[a2])
                nums1[i--]=nums1[a1--];
            else
                nums1[i--]=nums2[a2--];
        }
        while(a1>=0)
        nums1[i--]=nums1[a1--];
        while(a2>=0)
        nums1[i--]=nums2[a2--];
    }
};