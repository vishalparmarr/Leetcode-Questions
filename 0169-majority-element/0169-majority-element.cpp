class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto i:mpp){
            if(i.second > (nums.size()/2)){
                return i.first;
            }
        }

        return -1;
    }
};
