class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      int n = arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        set<int> s;
        for(auto a: m){
            s.insert(a.second);
        }
        if(s.size() == m.size()){
            return true;
        }
        return false;
    }
};