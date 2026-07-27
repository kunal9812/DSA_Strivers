class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int Mcount = 0;
        int M = -1;
        for(int i = 0; i < nums.size(); i++){
            if(Mcount == 0){
                M = nums[i];
                Mcount++;
            }
            else if(nums[i] == M){
                Mcount++;
            }
            else{
                Mcount--;
            }
        }
        return M;
    }
};