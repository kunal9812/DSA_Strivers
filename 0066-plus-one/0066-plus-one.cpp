class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int n = digits.size();
        int i = n -1;
        do{
            if(digits[i]+1 > 9){
                digits[i] = 0;
                carry = 1;
                i--;
            }
            else{
                digits[i] = digits[i]+1;
                carry--;
                break;
            }
        }while(carry != 0 && i >=0);
        if(carry == 1){
            digits.emplace_back(1);
            reverse(digits.begin(),digits.end());
        }
        return digits;
    }
};