class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int ans = INT_MIN;
        for(string str : sen){
            stringstream ss(str);
            int count = 0;
            string word;
            while(ss >> word){
                count++;
            }
            ans = max(count, ans);
        }
        return ans;
    }
};