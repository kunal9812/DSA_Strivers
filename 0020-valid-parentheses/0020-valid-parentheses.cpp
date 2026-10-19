class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                sta.push(s[i]);
            }
            else if(s[i] == ')' && sta.empty()|| 
                    s[i] == '}' && sta.empty()||
                    s[i] == ']' && sta.empty()){
                return false;
            }
            else if(s[i] == ')' && sta.top() == '('||
                    s[i] == '}' && sta.top() == '{'||
                    s[i] == ']' && sta.top() == '['){
                sta.pop();
            }
            else{
                return false;
            }
        }
        if(!sta.empty()){
            return false;
        }
        return true;
    }
};