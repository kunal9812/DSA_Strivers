class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i = 0; i < size(nums); i++){
            int count = 0;
            for(int j = 0; j < size(nums); j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > (size(nums)/2)){
                return nums[i];
            }
        }
        return -1;
    }
};