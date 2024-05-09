class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        return buildTree(nums, 0, nums.length-1);
    }

    private TreeNode buildTree(int[] nums, int start, int end) {
        if (start > end) {
            return null;
        }

        int mid = (start + end) / 2;
        TreeNode left = buildTree(nums, start, mid-1);
        TreeNode right = buildTree(nums, mid+1, end);
        return new TreeNode(nums[mid], left, right);

    }
}