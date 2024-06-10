class Solution {
public:

    bool isequal(int arr1[],int arr2[]){
        int i;
        for(i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int count2[26] = {0};
        for(int i=0;i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // for window 1
        int i = 0;
        int windowSize = s1.length();
        while(i<windowSize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if(isequal(count1,count2)){
            return 1;
        }

        //continue the window by adding one element in the window and remove the leftmost element in window
        while(i<s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i-windowSize];
            index = oldChar - 'a';
            count2[index]--;
            i++;

            if(isequal(count1,count2)){
            return 1;
            }
        }

        
        return 0;
    }
};