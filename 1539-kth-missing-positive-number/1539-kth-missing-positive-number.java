class Solution {
    public int findKthPositive(int[] arr, int k) {
        // so basically we will try to do binary search 
        // and try to find the index between which we can find our missing number
        //for ex a normal array with no missing should have been like of size 5

        //1,2,3,4,5
        int min=0;
        int max=arr.length-1;
        //search from left to right
        while(min<=max){
            int mid=(min+max)/2;
            //missing will store missing elemnts till now
            //for ex in above array
            // for index 5
            //5-4+1=0
            // hence no missing
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                //look right
                min=mid+1;
            }
            else{
                //look left 
                // our missing number might be somewhere left
                max=mid-1;
            }
        }
        //after the binary search ends we can observe that the
        // missing number is between max and min index
        // max being on left side 
        // min being on right side
        //i.e max, missing , left
        //usually we could return arr[max]+more
        // but we are not return beacuse max can be -1 in some cases
        // which will give us array out of bounds
        // more is more element need to get to the issing value
        //more=k-missing elemts at max
        //i.e more=k-(arr[max]-(max+1))
        //more= k-arr[max]+max+1
        // return vaue of missing is
        // arr[max]+k-arr[max]+max+1
        //k+max+1
        //max+1=low
        //hence answer is min+k
        return min+k;
    }
}