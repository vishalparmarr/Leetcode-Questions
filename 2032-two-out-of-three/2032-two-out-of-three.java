class Solution {
    public List<Integer> twoOutOfThree(int[] nums1, int[] nums2, int[] nums3) {
        Set<Integer> set = new HashSet<>();
        List<Integer> result = new ArrayList<Integer>();
        
        for(int i=0; i<nums1.length; i++){
            set.add(nums1[i]);
        }

        for(int i=0; i<nums2.length; i++){
            if(set.contains(nums2[i]) && (!result.contains(nums2[i]))){
                result.add(nums2[i]);
            }
        }

        for(int i=0; i<nums2.length; i++){
            set.add(nums2[i]);
        }

        for(int i=0; i<nums3.length; i++){
            if(set.contains(nums3[i]) && (!result.contains(nums3[i]))){
                result.add(nums3[i]);
            }
        }

        return result;
    }
}