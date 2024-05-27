class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int start = 0;
        int end = num;
        
        long long mid = start + (end - start) / 2;
        
        while(start <= end) {
            
            if(mid * mid == num)
                return true;
            
            if(mid * mid < num)
                start = mid + 1;
            else
                end =  mid - 1;
            
            mid = start + (end - start) / 2;
        }
        return false;
    }
};