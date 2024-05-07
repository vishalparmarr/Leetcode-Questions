class Solution {
    public int minimumSum(int num) {
        int[] digits = new int[4];
        for (int i = 3; i >= 0; i--) {
            digits[i] = num % 10;
            num /= 10;
        }
        Arrays.sort(digits); // Ascending order
        int num1 = digits[0] * 10 + digits[2]; // 1st and 3rd digit
        int num2 = digits[1] * 10 + digits[3]; // 2nd and 4th digit
        return num1 + num2;
        
    }
}