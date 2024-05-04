
class Solution {
    public int findSecondMinimumValue(TreeNode root) {
        if(root==null){
            return 0;
        }
        PriorityQueue<Integer> pq=new PriorityQueue<>();
        dfs(root,pq);
        int num=pq.remove();
        while(!pq.isEmpty()){
            int n=pq.remove();
            if(num!=n){
                return n;
            }
        }
        return -1;
    }
    public void dfs(TreeNode root,PriorityQueue<Integer> pq){
        if(root==null){
            return ;
        }
        pq.add(root.val);
        dfs(root.left,pq);
        dfs(root.right,pq);
    }
}
