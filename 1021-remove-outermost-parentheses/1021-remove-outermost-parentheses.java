class Solution {
    public String removeOuterParentheses(String s) {
        int count =0;
        StringBuilder res = new StringBuilder();
        for(char ch:s.toCharArray()){
            if(ch=='('){
                if(count>0){
                   res.append(ch); 
                }
                count++;
            }
            else if(ch==')'){
            count--;
            if(count>0){
               res.append(ch);
                }
            }
        }
        
      
       
        return res.toString();
    }
}