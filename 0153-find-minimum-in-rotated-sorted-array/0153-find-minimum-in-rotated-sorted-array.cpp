class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int mini = INT_MAX;
        int l = 0;
        int h = n-1;
        if(nums[l] < nums[h]){
            return nums[l];
        }
        while(l<=h){
            int mid = l + (h-l)/2;
            mini = min(nums[mid], mini);
            if(nums[mid]>nums[h]){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return mini;
    }
};