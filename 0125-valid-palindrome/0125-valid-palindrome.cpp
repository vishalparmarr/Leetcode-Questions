class Solution {
private:
    char tolowerCase(char s) {
        
        if(s >= '0' && s <= '9' || s >= 'a' && s <= 'z')
            return s;
        else {
            char temp = s - 'A' + 'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        
        string st;
        int i = 0;
        
        while(i < s.length()) {
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9') {
                st.push_back(tolowerCase(s[i]));
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