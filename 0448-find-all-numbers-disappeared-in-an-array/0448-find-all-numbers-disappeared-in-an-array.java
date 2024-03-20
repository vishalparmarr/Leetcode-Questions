class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n = nums.length;
        int i = 0;
        while (i < n) {
            int correct = nums[i]-1;
            if (correct < n && nums[i] != nums[correct]) {//correct<n will ignore the number n
                int temp = nums[correct];
                nums[correct] = nums[i];
                nums[i] = temp;
            } else {
                i++;
            }
        }
        // Search for the missing number

        List<Integer>ans=new ArrayList<>();
        for(int index=0;index<n;index++){
            if(nums[index]!=index+1){
            ans.add(index+1);
        }
        }
        return ans;
    }
}