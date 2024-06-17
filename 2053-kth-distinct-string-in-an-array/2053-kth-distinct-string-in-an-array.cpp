class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        vector<string> ans;
        int j;
        for(int i = 0; i < arr.size(); i++) {
            
            int c = 0;
            for(j = 0; j < arr.size(); j++) {
                
                if(arr[i] == arr[j] && i != j) {
                    c++;
                    break;
                }
            }
            
            if(c== 0)
                ans.push_back(arr[i]);
        }
        
        if(ans.size() < k)
            return "";
        
            return ans[k - 1];
    }
};