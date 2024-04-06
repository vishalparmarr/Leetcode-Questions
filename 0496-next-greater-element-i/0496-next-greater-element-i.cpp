class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        map<int,int> m;
        int n = nums2.size();
        for(int i=n-1;i>=0;i--){
            int a = -1;
            while(!st.empty()){
                int p = st.top();
                if(p>nums2[i]){
                    a = p;
                    break;
                }
                st.pop();
            }
            m[nums2[i]] = a;
            st.push(nums2[i]);
        }
       
        vector<int> ans;
        for(auto e:nums1){
            ans.push_back(m[e]);
        }
        
        return ans;
    }
};

