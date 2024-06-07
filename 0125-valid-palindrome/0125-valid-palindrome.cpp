class Solution {
public:
    bool isPalindrome(string s) {
        
        string st;
        int i = 0;
        
        while(i < s.length()) {
            if(isalnum(s[i])) {
                st.push_back(tolower(s[i]));
            }
            i++;
        }
        
        int start = 0;
        int end = st.length() - 1;
        
        while(start <= end) {
            
            if(st[start] != st[end]) 
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }       
};