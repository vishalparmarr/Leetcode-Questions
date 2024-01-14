class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0;
        
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                
                if(i == j) 
                    sum += mat[i][j];
                
                if(j == (mat.size() - i - 1))
                    sum += mat[i][j];
                
            }
        }

        // when odd matrix
        if(mat.size() & 1) {
            int mid = (mat.size() - 1) / 2;
            sum = sum - mat[mid][mid];
        }
        return sum;
    }
};