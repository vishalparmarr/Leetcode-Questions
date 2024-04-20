class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack <char> s1;
        stack <char> s2;
        
        for(int i = 0; i < s.size(); i++) {
            
            if(s[i] == '#' && !s1.empty()) {
                s1.pop();
            }
            
            if(s[i] != '#')
                s1.push(s[i]);
            else
                continue;
        }
        
        for(int i = 0; i < t.size(); i++) {
            
            if(t[i] == '#' && !s2.empty()){
                s2.pop();
            }
            
            if(t[i] != '#')
                s2.push(t[i]);
            else
                continue;
        }
        
        if(s1.size() != s2.size())
            return false;
        else {
            while(!s1.empty() && !s2.empty()) {
                
                if(s1.top() == s2.top()) {
                    s1.pop();
                    s2.pop();
                }
                else
                    return false;
            }
        }
        return true;
    }
};