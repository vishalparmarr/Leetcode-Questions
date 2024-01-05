class Solution {
public:
    int min_ans = 10000000, max_ans = -1;
    int binarySearch(int start, int end, int target, vector<int>& nums, int dir) {
        if(start > end) return -1;
        int mid = start + (end-start)/2;
        if(nums[mid] == target) {
            if(dir == 0) {
                min_ans = min(mid, min_ans);
                return binarySearch(start, mid-1, target, nums, dir);
            }
            else {
                max_ans = max(mid, max_ans);
                return binarySearch(mid+1, end, target, nums, dir);
            }
        }
        else if(nums[mid] < target) return binarySearch(mid+1, end, target, nums, dir);
        else return binarySearch(start, mid-1, target, nums, dir);
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return vector<int>({-1, -1});
        binarySearch(0, nums.size()-1, target, nums, 0);
        binarySearch(0, nums.size()-1, target, nums, 1);
        if(max_ans == -1) {
            return vector<int>({-1, -1});
        }
        return vector<int>({min_ans, max_ans});
    }
};