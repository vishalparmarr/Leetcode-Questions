class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        for(int i = 0; i < magazine.size(); i++) {
            
            for(int j = 0; j < ransomNote.size(); j++) {
                
                if(magazine[i] == ransomNote[j]) { 
                    ransomNote[j] = '0';
                    break;
                }
            }
                        
        }
            
        bool flag = 0;
        
            for(int i = 0; i < ransomNote.size(); i++) {
                
                if(ransomNote[i] == '0')
                    flag = 1;
                else {
                    flag = 0;
                    break;
               
            }
            }
        return flag;
    }
};