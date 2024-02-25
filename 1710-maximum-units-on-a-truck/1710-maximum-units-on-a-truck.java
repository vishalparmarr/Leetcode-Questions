class Solution {
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        Arrays.sort(boxTypes,(a,b)->Integer.compare(b[1],a[1]));

        int totalunits=0;
        int remainingspace=truckSize;

        for(int[] box:boxTypes)
        {
            int numboxes=Math.min(remainingspace,box[0]);
            totalunits+=numboxes*box[1];
            remainingspace-=numboxes;
            if(remainingspace==0) break;
        }
return totalunits;

    }
} 