class Solution {
public:
    string reverseVowels(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(!isVowel(s[l])) l++;
            if (!isVowel(s[r])) r--;
            if(isVowel(s[l]) && isVowel(s[r])) swap(s[l++],s[r--]);
        }
        return s;
    }
    bool isVowel(char x){
        return x=='a' ||  x=='e' ||  x=='i' ||  x=='o' || x=='u' || x=='A' ||  x=='E' ||  x=='I' ||  x=='O' || x=='U';
    }
};