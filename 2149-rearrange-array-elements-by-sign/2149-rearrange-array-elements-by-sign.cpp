class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i= 0; i < nums.size(); i++){
            if(nums[i]<0){
                neg.emplace_back(nums[i]);
            }
            else{
                pos.emplace_back(nums[i]);
            }
        }
        int pc,nc;
        pc=nc=0;
        for(int i = 0; i < nums.size(); i++){
            if(i%2==0){
                nums[i] = pos[pc];
                pc++;
            }
            else{
                nums[i]=neg[nc];
                nc++;
            }
        }
        return nums;
    }
};