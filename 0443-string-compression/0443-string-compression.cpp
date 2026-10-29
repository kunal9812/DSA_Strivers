class Solution {
public:
    int compress(vector<char>& chars) {
        int r = 0;
        int w = 0;

        while(r < chars.size()){
            char ch = chars[r];
            int count = 0;
            while(r<chars.size() && ch == chars[r]){
                count++;
                r++;
            }

            chars[w++] = ch;

            if(count>1){
                string s = to_string(count);
                for(char digit : s){
                    chars[w++] = digit;
                }
            }

        }
        return w;
    }
};