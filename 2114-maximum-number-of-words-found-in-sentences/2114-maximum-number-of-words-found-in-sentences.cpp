class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int ans = INT_MIN;
        for(string str : sen){
            int count = 0;
            for(char ch : str){
                if(ch == ' '){
                    count++;
                }
            }
            ans = max(count, ans);
        }
        return ans+1;
    }
};