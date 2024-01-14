class Solution {
public:
    void merger(vector<int>& nums, int start, int end){
        //define left array and right array lengths
        int mid = start + (end-start)/2;
        int leftlen = mid-start+1, rightlen = end-mid;
        
        //create left array and right array
        vector<int> leftArray(leftlen);
        vector<int> rightArray(rightlen);

        int k = start;

        //copy values to left array 
        for(int i=0; i<leftlen; i++){
            leftArray[i] = nums[k++];
        }

        //copy values to right array
        for(int i=0; i<rightlen; i++){
            rightArray[i] = nums[k++];
        }

        //merge both left array and right array
        int leftInd = 0, rightInd = 0, mainInd = start;
        while(leftInd < leftlen && rightInd < rightlen){
            if(leftArray[leftInd] < rightArray[rightInd]){
                nums[mainInd++] = leftArray[leftInd++];
            }
            else{
                nums[mainInd++] = rightArray[rightInd++];
            }
        }

        //add remaining elements of left array to main array
        while(leftInd < leftlen){
            nums[mainInd++] = leftArray[leftInd++];
        }

        //add remaining elements of right array to main array
        while(rightInd < rightlen){
            nums[mainInd++] = rightArray[rightInd++];
        }
    }

    void mergeSort(vector<int>& nums, int start, int end){
        //base case
        if(start >= end){
            return;
        }

        //ek case solve kardo
        //split the array and sort it
        int mid = start + (end-start)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);

        //now merge the splitted array
        merger(nums, start, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        mergeSort(nums, start, end);
        return nums;
    }
};