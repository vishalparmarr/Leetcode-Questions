class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string s1 = "";
        int size1 = word1.length();
        int size2 = word2.length();
        int i = 0, j = 0;
        
        while (i < size1 && j < size2) {
            
            s1 += word1[i++];
            s1 += word2[j++];
        }

        while(i < size1) {
                s1.push_back(word1[i++]);
        }
        
        while(j < size2) {
            s1.push_back(word2[j++]);
        }
        return s1;
    }
};