class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
            return false;
        
        long digit = 0;
        int orignal = x;
        
        while( x != 0) {
            
            int rem = x % 10;
            digit = (10*digit) + rem;
            x /= 10;
        }
        
        if(digit == orignal)
            return true;
        else
            return false;
    }
};