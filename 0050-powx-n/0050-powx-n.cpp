class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long nn = n;
        if(nn<0){
            nn *= -1;
        }
        if(n == 0 || x == 1){
            return 1;
        }
        while(nn){
            if(nn % 2 == 1){
                ans *= x;
                nn -= 1;
            }
            else{
                x = x * x;
                nn /= 2;
            }
        }
        if(n < 0){
            return 1.0/ans;
        }
        return ans;
    }
};