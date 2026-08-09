class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.emplace_back(row_generate(i));
        }
        return ans;
    }
    vector<int> row_generate(int n){
        vector<int> row;
        row.emplace_back(1);
        int ans = 1;
        for(int i = 1;i <  n; i++){
            ans *= (n-i);
            ans /= i;
            row.emplace_back(ans);
        }
        return row;
    }
};