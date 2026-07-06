class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0];
        for(int i = 1; i < size(nums); i++){
            result = nums[i]^result;
        }
        return result;
    }
};