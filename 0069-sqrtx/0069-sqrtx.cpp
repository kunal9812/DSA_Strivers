class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int l = 1;
        int h = x/2;
        int ans = 1;
        while(l<=h){
            int mid = l + (h-l)/2;

            if((long long)mid*mid <= (long long)x){
                ans = mid;
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return ans;
    }
};