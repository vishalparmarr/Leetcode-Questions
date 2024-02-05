class Solution {
    public double findMedianSortedArrays(int[] arr1, int[] arr2) {
        int n1 = arr1.length;
        int n2 = arr2.length;

        int ans[] = new int[n1+n2];

        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2){
            if(arr1[i]<arr2[j]){
                ans[k++]=arr1[i++];
            }else{
                ans[k++]=arr2[j++];
            }
        }
        if(i<n1){
            while(i<n1){
                ans[k++]=arr1[i++];
            }
        }
        if(j<n2){
            while(j<n2){
                ans[k++]=arr2[j++];
            }
        }
        if((n1+n2)%2!=0) return (double) ans[(n1+n2)/2];
        else{
            int a = (n1+n2)/2;
            int b = a-1;
            double x = ans[a];
            double y = ans[b];
            return (x+y)/2;
        }
    }
}