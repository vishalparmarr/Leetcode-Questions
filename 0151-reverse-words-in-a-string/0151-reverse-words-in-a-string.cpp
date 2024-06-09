class Solution {
public:
    string reverseWords(string s) {
        
        stack <char> ch;
        string ans;
        
        int start = 0;
int end = s.size() - 1;

while (start <= end && s[start] == ' ') ++start;
while (end >= start && s[end] == ' ') --end;
        
        for(int i = end; i >= start; i--) {
            
            if(s[i] == ' ') {
                while(!ch.empty()) {
                    ans.push_back(ch.top());
                    ch.pop();
                }
                int last = ans.size() - 1;
                if(ans[last] != ' ')
                    ans.push_back(' ');
            }
            else {
                ch.push(s[i]);
            }
        }
        
        while(!ch.empty()) {
                   
                    ans.push_back(ch.top());
                    ch.pop();
                }
        
        return ans;
    }
};