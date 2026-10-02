class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int row = 0;
        int col = matrix[row].size()-1;
        while(col>=0 && row < matrix.size()){
            if(target == matrix[row][col]){
                return true;
            }
            else if(target > matrix[row][col]){
                row++;
            }
            else{
                col--;
            }
        }
        return false;
    }
};