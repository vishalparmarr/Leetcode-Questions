class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        
        int ans = 0;
        
        for(int i = 0; i < hours.size(); i++) {
            
            if(hours[i] >= target)
                ans++;
        }
        return ans;
    }
};