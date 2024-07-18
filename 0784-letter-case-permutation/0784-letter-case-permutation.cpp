class Solution {
private: 
    void permutation(vector <string> &ans, int i, string s) {
        
        //base case
        if(i >= s.length()) {
            ans.push_back(s);
            return ;
        }
            
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = toupper(s[i]);
            permutation(ans, i+1, s);
            s[i] = tolower(s[i]);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = tolower(s[i]);
            permutation(ans, i+1, s);
            s[i] = toupper(s[i]);
        }
        permutation(ans, i+1, s);
    }
public:
    vector<string> letterCasePermutation(string s) {
        
        vector <string> ans;
        int i = 0;
        permutation(ans, i, s);
        
        return ans;
    }
};