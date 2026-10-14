class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *max_element(nums.begin(),nums.end());
        int ans = r;
        while(l<=r){
            int mid = l + (r-l)/2;

            if(check_total(nums, mid, threshold)){
                ans = min(ans, mid);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
    bool check_total(vector<int>& nums, int div, int th){
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            total += ceil((float)nums[i]/div);
        }
        if(total<=th){
            return true;
        }
        else{
            return false;
        }
    }
};