class Solution {
public:
    bool isPowerOfThree(int n) {
        
    int i = 0;
    while(i <= n) {
        
        long ans = pow(3,i);
        if(ans == n) {
            return true;
            break;
        }
        else if(ans > n)
            return false;
        
        i++;
    }
    return false;
    }
};