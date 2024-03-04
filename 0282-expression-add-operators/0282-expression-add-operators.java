class Solution {
    
    public List<String> addOperators(String num, int target) {
        List<String> result = new ArrayList<>();
        solve(result, num, target, "", 0, 0, 0);
        return result;
    }
    
    public static void solve(List<String> result, String num, int target, String exp, int index, long sum, long pre) {
        if (index == num.length() && sum==target) {
                result.add(exp);
        }
        
        
        for(int i=index;i<num.length();i++)
        {
            String s = num.substring(index, i + 1);
        if (i != index && num.charAt(index) == '0') {
                break;
            }
                    long op = Long.parseLong(s);

        if (index == 0) {
            solve(result, num, target, exp + op, i + 1, op, op);
        } else {
            solve(result, num, target, exp + "+" + op, i+ 1, sum + op, op);
            solve(result, num, target, exp + "-" + op, i + 1, sum - op, -op);
            long newVal = sum - pre + pre * op;
            solve(result, num, target, exp + "*" + op, i + 1, newVal, pre * op);
        }
        }
        
    }
}
