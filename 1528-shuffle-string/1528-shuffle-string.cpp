class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int size1 = s.length();
        int size2=indices.size();
        string ans = "";
        int n;
        char val;
        
        for(int i = 0; i < size1; i++) {
            ans += i;
        }
        
        for(int i = 0; i < size1; i++) {
            
            n = indices[i];
            val = s[i];
            ans[n] = val;
           
        }
        return ans;
    }
};