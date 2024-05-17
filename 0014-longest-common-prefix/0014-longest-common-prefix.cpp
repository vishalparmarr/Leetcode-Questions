class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        int ch = 0;
        
        while(true) {
        for(int i = 0; i < strs.size(); i++) {
            
            if(strs[i][ch] == '\0')
                return ans;
            
            if(strs[i][ch] != strs[0][ch])
                return ans;
            
        }
            ans += strs[0][ch];
            ch++;
        }
        return ans;
    }
};