class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string first;
        for (int i = 0; i < word1.size(); i++)
            first += word1[i];
        
        string second;
        for (int i = 0; i < word2.size(); i++) {
            second+= word2[i];
        }
        
        if(first == second)
            return true;
        else
            return false;
    }
};