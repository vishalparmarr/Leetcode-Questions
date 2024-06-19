class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s == goal)
            return true;
        
        string temp;
        temp = s;
        bool flag = 0;
        
        for(int i = 0; i < s.length(); i++) {
            
            temp.push_back(s[i]);
            temp.erase(temp.begin());
    
            if(temp == goal){
                flag = 1;
                break;
            }
        }
        return flag;
    }
};